/* 
 *  Title: Web App Entry Point
 *  Description: This is a a web builder script that generates the web files for this repository 
 *  Author: Fred C. Siika <https://github.com/fredsiika>
 *  Date: 27-September-2018
 */
 
// Load module
const fs = require('fs'),
    path = require('path'),
    chalk = require('chalk'),
    md = require('markdown-it'),
    minify = require('html-minifier').minify;
const util = require('./util');
const Prism = require('prismjs');
const minifyHTML = str =>
    minify(str, {
        collapseBooleanAttributes: true,
        collapseWhitespace: true,
        decodeEntities: false,
        minifyCSS: true,
        minifyJS: true,
        keepClosingSlash: true,
        processConditionalComments: true,
        removeAttributeQuotes: false,
        removeComments: true,
        removeEmptyAttributes: false,
        removeOptionalTags: false,
        removeScriptTypeAttributes: false,
        removeStyleLinkTypeAttributes: false,
        trimCustomFragments: true
    });

    const unescapeHTML = str =>
    str.replace(
      /&amp;|&lt;|&gt;|&#39;|&quot;/g,
      tag =>
        ({
          '&amp;': '&',
          '&lt;': '<',
          '&gt;': '>',
          '&#39;': "'",
          '&quot;': '"'
        }[tag] || tag)
    );
  const generateSnippetCard = (
    snippetList,
    snippetKey,
    addCornerTag = false
  ) => `<div class="card code-card">
  ${
    addCornerTag
      ? `<div class="corner ${
          snippetKey[1].includes('advanced')
            ? 'advanced'
            : snippetKey[1].includes('beginner')
              ? 'beginner'
              : 'intermediate'
        }"></div>`
      : ''
  }
    ${md
      .render(`\n${addCornerTag ? snippetList[snippetKey[0] + '.md'] : snippetList[snippetKey[0]]}`)
      .replace(/<h3/g, `<div class="section card-content"><h4 id="${snippetKey[0].toLowerCase()}"`)
      .replace(/<\/h3>/g, '</h4>')
      .replace(
        /<pre><code class="language-js">/m,
        '</div><div class="copy-button-container"><button class="copy-button" aria-label="Copy to clipboard"></button></div><pre><code class="language-js">'
      )
      .replace(
        /<pre><code class="language-js">([^\0]*?)<\/code><\/pre>/gm,
        (match, p1) =>
          `<pre class="language-js">${Prism.highlight(
            unescapeHTML(p1),
            Prism.languages.javascript
          )}</pre>`
      )
      .replace(/<\/div>\s*<pre class="/g, '</div><pre class="section card-code ')
      .replace(
        /<\/pre>\s+<pre class="/g,
        '</pre><label class="collapse">examples</label><pre class="section card-examples '
      )}
    </div>`;
  const filterSnippets = (snippetList, excludedFiles) =>
    Object.keys(snippetList)
      .filter(key => !excludedFiles.includes(key))
      .reduce((obj, key) => {
        obj[key] = snippetList[key];
        return obj;
      }, {});
  if (
    util.isTravisCI() &&
    /^Travis build: \d+/g.test(process.env['TRAVIS_COMMIT_MESSAGE']) &&
    process.env['TRAVIS_EVENT_TYPE'] !== 'cron' &&
    process.env['TRAVIS_EVENT_TYPE'] !== 'api'
  ) {
    console.log(
      `${chalk.green('NOBUILD')} website build terminated, parent commit is a Travis build!`
    );
    process.exit(0);
  }

// Travis CI config files


// Compile mini.css frameworks and custom styles, ising node-sass


// Set variables for the $PATH


// Start the timer for the script


// Load static parts of this repo (snippets/glossar/etc)


// Load tag data from datatbase in (./glossary/keyword_database)


// Shuffle the array of snippets


// Generate the HTML for selected snippets


// Optimize operator nodes


// Pull the daily picks into the HTML webpage


// Send requests and wait for the response, write to the pag



// Generate the `index.html` files


// Create the output for individual category pages



// Optimize Keyword Node 
archivedOutput = util.optimizeNode(
    archivedOutput,
    /<span class= "token keyword">([^\0<]*?)<\/span class="token operator">([^\0]*?)<\/span>/gm,
    (match, p1, p2, p3) => `<span class="token operator"${p1}${p2}{p3</span>`
);
archivedOut += `${archiedEndPart}`;

// Minify resently rendered output from previous category pages
pagesOuput.forEach(page () => {
    page.content = minify(page.content, {
        collapseBooleanAttributes: true,
        collapseWhiteSpace: true,
        decodeEntities: false,
        minifyJS: true,
        keepClosingSlash: true,
        processConditionalComments: true,
        removeAttributeQuotes: false,
        removeComments: true,
        removeEmpyAttribtues: true, 
        removeScriptTypeAttributes: false,
        removeStyleLinkTypeAttributes: false,
        trimCustomFragments: true
    });
    fs.writeFilesSync(paths.join(docsPath, page.tag + '.html'), + page.content);
});

// Create the output for the `beginner.html` page
try {
    // Add the static parts
    beginning output += `${beginningStartPart + '\n'}`;
}

filter beginning snippets