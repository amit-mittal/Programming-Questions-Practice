"""fact = lambda n: reduce (lambda x,y:x*y, range(1,n+1))
 
def mod10(n):
	r = 0

for i in range(1,n+1):
	f = fact(i)
	r = (r + pow(i,f,10)) % 10
	return r
 
 
while True:
	a = raw_input()
	if a == '#':break
	print mod10(int(a))"""
from Euler import is_prime
if is_prime(23):
	print 'hi'
else:
	print 'no'
