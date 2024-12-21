"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");
 
let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
	inputString += inputStdin;
});
 
process.stdin.on("end", (_) => {
	console.log("run end");
	inputString = inputString.trim().split("\n").map((string) => {
		return string.trim();
	});
	main();
});
 
function readline() {
	return inputString[currentLine++];
}

function main() {
	let input = readline()
	//let inputs = readline().split(' ').map(Number)

	let result = 0
	console.log( result  )
}
