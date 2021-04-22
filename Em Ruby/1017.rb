temp=gets.chomp.to_f
veloc=gets.chomp.to_f
distancia=temp*veloc
distancia=distancia/12
distancia=format("%.3f",distancia)
puts "#{distancia}"
