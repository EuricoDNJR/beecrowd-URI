valor=gets.chomp.to_i
	valor1=valor
  n100=0
  n50=0
  n20=0
  n10=0
  n5=0
  n2=0
  n1=0
		if valor>=100
		n100=valor/100
		valor=valor-(n100*100)
    end
		if valor>=50
			n50=valor/50
			valor=valor-(n50*50)
    end  
		if valor>=20
			n20=valor/20
			valor=valor-(n20*20)
    end  
		if valor>=10
			n10=valor/10
			valor=valor-(n10*10)
    end  
		if valor>=5
			n5=valor/5
			valor=valor-(n5*5)
    end  
		if valor>=2
			n2=valor/2
	  	valor=valor-(n2*2)
    end  
		if valor>=1
			n1=valor/1
			valor=valor-(n1*1)
    end  
	puts "#{valor1}"
	puts "#{n100} nota(s) de R$ 100,00"
	puts "#{n50} nota(s) de R$ 50,00"
	puts "#{n20} nota(s) de R$ 20,00"
	puts "#{n10} nota(s) de R$ 10,00"
	puts "#{n5} nota(s) de R$ 5,00"
	puts "#{n2} nota(s) de R$ 2,00"
	puts "#{n1} nota(s) de R$ 1,00"
