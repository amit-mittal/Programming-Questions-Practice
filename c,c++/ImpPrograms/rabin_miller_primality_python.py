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