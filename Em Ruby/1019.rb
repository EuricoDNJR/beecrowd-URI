N=gets.chomp.to_i
	h = N/3600
	m = (N/60)%60
    s = N%60
    puts "#{h}:#{m}:#{s}"
