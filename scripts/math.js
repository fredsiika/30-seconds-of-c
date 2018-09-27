/*
 *  Title: Math Library
 *  Description: Utility library for math-related functions
 *  Author: Fred C. Siika 
 *  Date: 27 September 2018
 */

//  App object
const math = {};

// Get a random integer between two integers
// Credit: http://stackoverflow.com/questions/4959975/generate-random-number-between-two-numbers-in-javascript
math.getRandomNumber = function(min, max){
    // Some basic type-checking
    min = typeof(min) == 'number' && min % 1 === 0 ? min : 0;
    max = typeof(max) == 'number' && max % 1 === 0 ? max : 0;
    return Math.floor(Math.random()*(max-min+1)+min);
};

// Export the library
module.exports = math;