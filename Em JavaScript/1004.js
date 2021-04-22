var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var n1 = parseInt(lines.shift());
var n2 = parseInt(lines.shift());

console.log('PROD = ' + (n1 * n2));
