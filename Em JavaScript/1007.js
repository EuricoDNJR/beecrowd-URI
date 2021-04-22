var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var n1 = parseInt(lines.shift())
var n2 = parseInt(lines.shift())
var n3 = parseInt(lines.shift())
var n4 = parseInt(lines.shift())

console.log('DIFERENCA = ' + (n1 * n2 - n3 * n4))