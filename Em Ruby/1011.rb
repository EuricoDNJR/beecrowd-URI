pi=3.14159
    R=gets.chomp.to_f
    R=(R**3)
	calc=(4.0/3)*pi*R
    calc = format("%.3f",calc)
    puts "VOLUME = #{calc}"

