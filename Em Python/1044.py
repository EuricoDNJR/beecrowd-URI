x, y = map(int, input().split())

if (x >= y):
	if (x % y == 0):
		print("Sao Multiplos")
	else:
		print("Nao sao Multiplos")
else:
	if (y % x == 0):
		print("Sao Multiplos")
	else:
		print("Nao sao Multiplos")