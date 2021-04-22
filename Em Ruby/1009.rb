nome = gets.chomp
slfixo = gets.chomp.to_f
tvendas = gets.chomp.to_f
	tvendas=tvendas*0.15;
	total=slfixo+tvendas;
	total=format("%.2f",total)
  puts "TOTAL = R$ #{total}"
