roots = []; product = 1; x = 2; number = input("number: "); y = number
while product != number:
	while (y % x == 0):
		roots.append(x)
		y /= x
		product *= roots[-1]
		print roots[-1]
	x += 1
print roots
