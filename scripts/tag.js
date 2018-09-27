/* 
 *  Title: Tagger Script
 *  Description: This is the tagger script that updates the tag_databse file and logs stats for snippet tags.
    Run using `npm run tagger`.
 *  Author: Fred C. Siika <https://github.com/fredsiika>
 *  Date: 27-September-2018
 */

// Load modules

// Set variables for paths

// Set variables for script

// Start timer of the script

// Synchronously read all snippets and sort them as necessary (Case-insensitive)

// Load tag data from the database

// Update the listing of snippets in tag_database and log the statistics, along with missing scripts

// Write to tag_database

// Handle errors (hopefully not!)

// Log statistics for the tag_database file

// Log a success message
console.log(`${chalk.green('SUCCESS!')} tag_database file updated`);

// Log the time taken
console.timeEnd('Tagger');