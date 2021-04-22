var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

lines1 = lines.shift().split(' ')
var a = parseInt(lines1[0])
var b = parseInt(lines1[1])
var c = parseInt(lines1[2])

var maiorab = parseInt((a + b + Math.abs(a-b)) / 2)

if (maiorab > c){
    console.log('' + maiorab + ' eh o maior')
}else{
    console.log('' + c + ' eh o maior')
}