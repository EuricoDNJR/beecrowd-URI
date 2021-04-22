n = 3.14159
raio = gets.chomp.to_f
area = n*(raio*raio)
area = format("%.4f", area)
puts "A=#{area}"