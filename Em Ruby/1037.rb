a=gets.chomp.to_f
    if a >= 0 and a <= 25.00
		puts "Intervalo [0,25]"
		elsif a > 25.00 and a <= 50.00
			puts "Intervalo (25,50]"
		elsif a > 50.00 and a <= 75.00
			puts "Intervalo [50,75]"
		elsif a > 75.00 and a <= 100.00
			puts "Intervalo (75,100]"
		else a > 100.00 or a<0
			puts"Fora de intervalo"
    end
