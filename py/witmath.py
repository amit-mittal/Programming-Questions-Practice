import random
 
_mrpt_num_trials = 5 # number of bases to test
 
def is_probable_prime(n):
	if n == 2:
		return True
	# ensure n is odd
	if n % 2 == 0:
		return False
	# write n-1 as 2**s * d
	# repeatedly try to divide n-1 by 2
	s = 0
	d = n-1
	while True:
		quotient, remainder = divmod(d, 2)
		if remainder == 1:
			break
		s += 1
		d = quotient
	assert(2**s * d == n-1)
 
	# test the base a to see whether it is a witness for the compositeness of n
	def try_composite(a):
		if pow(a, d, n) == 1:
			return False
		for i in range(s):
			if pow(a, 2**i * d, n) == n-1:
				return False
		return True # n is definitely composite
 
	for i in range(_mrpt_num_trials):
		a = random.randrange(2, n)
		if try_composite(a):
			return False
 
	return True

def isPrime(p,q):
	if(q==2):
		return 1

	n = q
	r = 1
	q = q-1
	while (q != 0):
		if (q % 2 == 1):
			r *= p
			q = q-1

			if(r>=n):
				r = r%n

		p *= p
		q /= 2

		if(p>=n):
			p = p%n

	if(r == 1):
		return 1
	else:
		return 0

test = int(raw_input())
while test>0:
	n = long(raw_input())

	ans = -1
	if(n%2==0):
		n = n-1

	i = n
	while(i>2):
#		if(isPrime(2,i) and isPrime(3,i)):
		if(is_probable_prime(i)):
			ans = i
			break
		i = i-2
	if(ans==-1):
		ans = 2
	if(n==3 or n==4):
		ans = 3

	print ans
	test = test-1