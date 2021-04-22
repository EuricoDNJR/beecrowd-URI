dias=gets.chomp.to_i
    anos=dias/365
    meses=(dias-anos*365)/30
    dias=(dias-anos*365)%30
    puts "#{anos} ano(s)"
    puts "#{meses} mes(es)"
    puts "#{dias} dia(s)"
