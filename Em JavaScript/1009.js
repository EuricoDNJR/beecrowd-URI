var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var nome = String(lines.shift())
var sal_fixo = parseFloat(lines.shift())
var tot_vendas = parseFloat(lines.shift())

var comissao = tot_vendas * 0.15
console.log('TOTAL = R$ ' + (comissao + sal_fixo).toFixed(2))
