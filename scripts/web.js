import { fstat } from "fs";

/* This is a a web builder script that generates the web files for this repository 
*
*
*
*
*/
 
// Load module


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