A = gets.chomp.to_f
B = gets.chomp.to_f
MEDIA = (A*3.5+B*7.5)/11;
MEDIA = format("%.5f",MEDIA) 
puts "MEDIA = #{MEDIA}"
