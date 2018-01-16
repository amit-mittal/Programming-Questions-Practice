def comb(n, r):
	n = int(n)
	r = int(r)

	if(r==0):
		return 1

	if(n==0):
		return 0;

	if(r<0 or r>n):
		return 0

	if(r>n-r):
		r = n-r

	numerator = 1
	for i in range(0,r):
		numerator = (numerator * (n-i) )
	
	denominator = 1
	for i in range(1,r+1):
		denominator = (denominator * i)

	return numerator/denominator

test = int(raw_input())

while test>0:
	line = raw_input()
	a = line.split(" ")
	s = float(a[0])
	n = float(a[1])
	m = float(a[2])
	k = float(a[3])

	den = float(n/s)
	den2 = float(comb(s, n))

	ans = 0
	if k>=n:
		ans = 0
	elif n==s:
		ans = 1
	else:
		if(n-k-1<=s-m):
			r = k
		else:
			r = n+m-s-1

		while r<=m-1 and n-r-1<=s-m and n-r-1>=0:
			first1 = comb(m-1, r)
			first2 = comb(s-m, n-r-1)

			ans += (first2*first1)
			r = r+1

	ans = float(ans)
	ans /=den2
	ans /= den;
	print("%.6f" % ans)
	test = test-1