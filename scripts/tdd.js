/*
  This is the tdd script that creates & updates your TDD environment .
  Run using `npm run tdd`.
*/

// Load modules
const fs = require('fs-extra'),
  path = require('path');
const childProcess = require('child_process');
const chalk = require('chalk');
const util = require('./util');
if (util.isTravisCI() && util.isNotTravisCronOrAPI()) {
  console.log(`${chalk.green('NOBUILD')} Testing terminated, not a cron job or a custom build!`);
  process.exit(0);
}
// Declare paths
