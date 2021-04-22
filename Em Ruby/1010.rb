line = gets.split(' ')
line2 = gets.split(' ')
peca1 = line[0].to_i
npecas1 = line[1].to_i 
vpecas1 = line[2].to_f
peca2 = line2[0].to_i 
npecas2 = line2[1].to_i 
vpecas2 = line2[2].to_f
calc1 = npecas1 * vpecas1
calc2 = npecas2 * vpecas2
result = calc1 + calc2

result = format("%.2f",result)

puts "VALOR A PAGAR: R$ #{result}"
