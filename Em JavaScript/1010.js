var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var linha1 = lines.shift().split(' ')

var cod1 = parseInt(linha1[0])
var quant1 = parseFloat(linha1[1])
var valor1 = parseFloat(linha1[2])

var linha2 = lines.shift().split(' ')
var cod2 = parseInt(linha2[0])
var quant2 = parseFloat(linha2[1])
var valor2 = parseFloat(linha2[2])

console.log('VALOR A PAGAR: R$ ' + (quant1 * valor1 + quant2 * valor2).toFixed(2))