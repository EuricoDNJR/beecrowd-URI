N=gets.chomp.to_i
contador=1
	while contador <= N do
		X = gets.chomp.to_i
		  if X<0 and X%2==0
			  puts "EVEN NEGATIVE"
		  end
			if X<0 and (X%2==1 or X%2==-1)
			   puts "ODD NEGATIVE"	
			end
			if X>0 and X%2==0
			  puts "EVEN POSITIVE"
		  end  
		  if X>0 and X%2==1
			  puts "ODD POSITIVE"
		  end  
		  if(X==0)
			  puts "NULL"
		  end
      contador +=1
  end      
