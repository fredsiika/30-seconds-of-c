/*
*   Simple test function that adds two numbers
*   Author: Fred Siika
*   
*/

const sum = require('./sum');

test('add 1 + 2 to equal 3', () => {
    expect(sum(1, 2).toBe(3));
});