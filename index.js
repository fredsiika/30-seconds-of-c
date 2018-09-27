/*
 *  Title: Basic Node Entry Point for the API
 *  Description: Simple file that declares a few functions and invokes them.
 *  Author: Fred C. Siika <https://github.com/fredsiika>
 *  Date: 27 September 2018
 */

//  Dependencies
// const fs = require('fs');
const mathLib = require('./lib/math');
const snippetsLib = require('./lib/snippets');
const chalk = require('chalk');


// const snippetTextFile = snippetsLib.getRandomSnippetFunctions('./lib/snippets', true, ['snippets.txt']);
// const fileTitles = [];

// const getRandomSnippetFunctions = fileName => {
//     let fileContent = fs.readFileSync(fileName, 'utf8');
// };

// App object
const app = {};

// Configuration
app.config = {
    'timeBetweenSnippets' : 100
};

// Function that prints a random snippet
app.printASnippet = function(){

    // Get all the snippets
    var allSnippets = snippetsLib.allSnippets();

    // Get the length of the snippets
    var numberOfSnippets = allSnippets.length;

    // Pick a random number between 1 and the number of snippets
    var randomNumber = mathLib.getRandomNumber(1,numberOfSnippets);

    // Get the snippet at that position in the array (minus one)
    var selectedSnippet = allSnippets[randomNumber - 1];

    // Send the snippet to the console
    console.log(`${chalk.green(selectedSnippet)}`);
};

// Function that creates a markdown file 
app.CreateMarkdownSnippet(){
    
}

// Function that loops indefinitely, calling the printASnippet function as it goes
app.indefiniteLoop = function(){

    // Create the interval, using the config variable defined above
    setInterval(app.printASnippet,app.config.timeBetweenSnippets);
};

// Invoke the loop
app.indefiniteLoop();