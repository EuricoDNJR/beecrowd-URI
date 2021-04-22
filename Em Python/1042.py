x = []

w, y, z = map(int,input().split())
x.insert(0,w)
x.insert(1,y)
x.insert(2,z)
for j in range(0,9):	
	for i in range(0,2):
		if (x[i] > x[i+1]):
			x[i] = x[i+1] + x[i]
			x[i+1] = x[i] - x[i+1]
			x[i] = x[i] - x[i+1]
for i in range(0,3):
	print(x[i])
print("")
print(w)
print(y)
print(z)