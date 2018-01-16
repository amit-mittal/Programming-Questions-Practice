MOD = (10**9) + 7

def expt(p,q):
	r = 1

	while (q != 0):
		if (q % 2 == 1):
			r *= p
			q = q-1

			if(r>MOD):
				r = r%MOD
		
		p *= p
		if(p>MOD):
			p = p%MOD
		q /= 2

	return r

test = int(raw_input())

while test>0:
	line1 = raw_input()
	arr1 = line1.split(" ")
	arr1 = [ int(x) for x in arr1 ]

	line2 = raw_input()
	arr2 = line2.split(" ")
	arr2 = [ int(x) for x in arr2 ]

	line3 = raw_input()
	arr3 = line3.split(" ")
	arr3 = [ int(x) for x in arr3 ]

	p = [];
	p.append(arr2[0])
	p.append(arr2[1])
	q = [];
	q.append(arr3[0])
	q.append(arr3[1])

	for i in range(2, arr1[1]):
		p.append(((arr2[2]**2)*p[i-1] + (arr2[3]*p[i-2]) + arr2[4])%arr2[5])
		q.append(((arr3[2]**2)*q[i-1] + (arr3[3]*q[i-2]) + arr3[4])%arr3[5])

	l = []
	for i in range(0, arr1[1]):
		l.append((p[i]*arr3[5]) + q[i] + 1)
	
	val = 1
	for i in range(0, arr1[1]):
		val = val*(l[i]-1)

	arr1[0] = arr1[0]%MOD
#	ans = expt(arr1[0], val)

	ans = pow(arr1[0], val, MOD)

	print ans
	test = test - 1