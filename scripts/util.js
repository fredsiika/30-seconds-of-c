/*
 *  Title: Snippets Library (Demo)
 *  Description: Utility library for getting a list of snippets.
 *  Author: Fred C. Siika
 *  Date: 27 September 2018
 */

//  Dependencies
const fs = require('fs-extra');
const path = require('path');
const chalk = require('chalk');
const crypto =require('crypto');


//  App object
const snippets = {};

// Get all the snippets and return them to the user
snippets.allSnippets = function(){
    
    // Read the text file containing the snippets
    let fileContents = fs.readFileSync(__dirname + '../snippets.txt', 'utf8');

    // Turn the string into an array
    let arrayOfSnippets = fileContents.split(/\r?\n/);

    // Return the array
    return arrayOfSnippets
};

// Export the library
module.exports = snippets;