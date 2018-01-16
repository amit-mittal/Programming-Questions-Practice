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
	elif m<=n:
		if(n-k-1<=s-m):
			r = k
			first1 = comb(m-1, k)
			first2 = comb(s-m, n-k-1)
		else:
			r = n+m-s-1
			first1 = comb(m-1, n+m-s-1)
			first2 = comb(s-m, s-m)
		
		ans += (first1*first2)
		while (m-r-1)>0 and (s-m-n+r+2)>0:
			first1 = first1*(m-r-1)
			first1 = first1/(r+1)

			first2 = first2*(n-r-1)
			first2 = first2/(s-m-n+r+2)

			ans += (first2*first1)
			r = r+1
	elif(m>n):
		if(n-k-1<=s-m):
			r = k
			first1 = comb(m-1, k)
			first2 = comb(s-m, n-k-1)
		else:
			r = n+m-s
			first1 = comb(m-1, n+m-s-1)
			first2 = comb(s-m, s-m)
		
		ans += (first1*first2)
		while (n-r-1)>0 and (s-m-n+r+2)>0:
			first1 = first1*(m-r-1)
			first1 = first1/(r+1)

			first2 = first2*(n-r-1)
			first2 = first2/(s-m-n+r+2)

			ans += (first2*first1)
			r = r+1

	ans = float(ans)
	ans /=den2
	ans /= den;
	print("%.6f" % ans)
	test = test-1