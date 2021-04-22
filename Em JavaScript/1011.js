var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var r = parseFloat(lines.shift())

console.log('VOLUME = ' + ((4.0/3.0) * 3.14159 * (r * r * r)).toFixed(3))