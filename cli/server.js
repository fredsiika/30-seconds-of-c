const fs = require("fs");
const getPort = require("get-port");
const open = require("open");
const handler = require("serve-handler");
const http = require("http");
const pather = require("path");

const sitePath = pather.join(__dirname, "site/");
const indexPath = pather.join(sitePath, "index.html");

function getIndex() {
		return new Promise((resolve, reject) => {
		fs.readFile(indexPath, "utf8", (err, data) => {
			if (err) reject(err);
			resolve(data);
		});
	});
}