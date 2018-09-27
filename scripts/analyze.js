// Dependencies
const fs = require('fs');
const path = require('path');
const chalk = require('chalk');
const prism = require('prismjs');
let snippetData = require('../snippet_data/snippet.json');
let snippetArchiveData = require('../snippet_data/snippetArchive.json');

// Paths
const OUTPUT_PATH = './snippet_data';
console.time('Analyzer');

// Read data 
let [snippetTokens, snippetArchiveTokens] = [snippetData, snippetArchiveData].map(v => ({
  data: v.data = prism.tokenize(
    snippet.attributes.codeBlocks[0],
    prism.languages.javascript,
    'javascript'
  ),
  return: {
    id: snippet.id,
    type: 'snippetAnalysis',
    attributes: {
      codeLength: snippet.attributes.codeBlocks[0].trim().length,
      tokenCount: tokens.length,
      functionCount: tokens.filter(t => t.type === 'function').length,
      operatorCount: tokens.filter(t => t.type === 'operator').length,
      keywordCount: tokens.filter(t => t.type === 'keyword').length,
      distinctFunctionCount: [
        ...new Set(tokens.filter(t => t.type === 'function').map(t => t.content))
      ].length
    },
    meta: {
      hash: snippet.meta.hash
    }
  },
  meta: { specification: 'http://jsonapi.org/format' }
}));

// Write data
fs.writeFileSync(
  path.join(OUTPUT_PATH, 'snippetAnalytics.json'),
  JSON.stringify(snippetTokens, null, 2)
);
fs.writeFileSync(
  path.join(OUTPUT_PATH, 'snippetArchiveAnalytics.json'),
  JSON.stringify(snippetArchiveTokens, null, 2)
);

// Display messages and time
console.log(
  `${chalk.green(
    "SUCCESS!"
  )} snippetAnalyticss.json and snippetArchiveAnalytics.json files generated!`
);
console.timeEnd(Analyzer);
