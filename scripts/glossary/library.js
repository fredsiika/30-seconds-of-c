/* 
 *  Title: "Librarian" Script
 *  Description: This is the "librarian" script that generates the glossary/README file. 
 *  Author: Fred C. Siika <https://github.com/fredsiika>
 *  Date: 27-September-2018
 */

//  Dependencies
const fs = require('fs-extra');
const chalk = require('chalk');
const util = require('../util');

/* Setting the location to search for keyword_database and README.md files */
const glossaryFiles = util.getFilesInDir('./glossary', true, ['keyword_database', 'README.md']);
const fileTitles = [];

// Parsing the all markdown files in glossary
const getGlossaryTermMarkdownBlock = fileName => {
  let fileContent = fs.readFileSync(fileName, 'utf8');

/*
      1. Matches all markdown docs starting with three pound signs `###`
      2. Synchronously reads the md file replaces the `### `, sets the title to the function name.
      3. Pushes this new title to the fileTitles array.
      4. Returns new fileTitle
      
      `/###[^\n]*`

  /     Forwardslash indicates the start of a regex expression
  ###   Character matching 3 pound-signs (char code 35) the equivalent of an <h3>header tag</h3>
  [^\n] Negated set. Match any character that is not in the set.
  \n    Escaped character matches any markdown files that begin with `###` regardless of if they leave the first line empty.
    *   Quantifier. Matches 0 or more of the preceding token.

*/
  let title = fileContent
    .match(/###[^\n]*/)[0] 
    .replace('### ', '')
    .trim();
  // let description = fileContent.replace(title, '').trim();
  fileTitles.push(title);

  return fileContent.trim() + '\n';
};

const glossaryFilesContentReducer = (accumulator, currentFilename) => {
    // handle first array item
    if (accumulator === glossaryFiles[0]) {
      return (
        getGlossaryTermMarkdownBlock(accumulator) +
        '\n' +
        getGlossaryTermMarkdownBlock(currentFilename)
      );
    }
    return accumulator + '\n' + getGlossaryTermMarkdownBlock(currentFilename);
  };

  // Sets the termTitle to proper markdown format `[termTitle](anchor/link)`
  const getTermLinkMarkdownBlock = termTitle => {
    let anchor = util.getMarkDownAnchor(termTitle);
    return `* [\`${termTitle}\`](#${anchor})` + '\n';
  };
  
  // Executes a reducer function that returns a callback once for each markdown file in the array.
  const glossaryTableOfContentsReducer = (accumulator, currentFile) => {
    if (accumulator === fileTitles[0]) {
      return getTermLinkMarkdownBlock(accumulator) + getTermLinkMarkdownBlock(currentFile);
    }
    return accumulator + getTermLinkMarkdownBlock(currentFile);
  };
  
  // Build the TOC along with the contents from markdown blocks catch error.
  try {
    const fileContents = glossaryFiles.reduce(glossaryFilesContentReducer);
    const TOC = '## Table of Contents\n\n' + fileTitles.reduce(glossaryTableOfContentsReducer);
  
    const README = '# 30-Seconds-Of-C C-Programming Glossary\n\n' + TOC + '\n\n' + fileContents;
    fs.writeFileSync('glossary/README.md', README);
  } catch (err) {
    console.log(`${chalk.red('ERROR!')} During glossary README generation: ${err}`);
    process.exit(1);
};