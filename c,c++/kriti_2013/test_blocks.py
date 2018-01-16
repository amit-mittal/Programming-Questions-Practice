import random;

random.seed();
n = 20000;
s = 500;
e = 5000;

print n, s, e;
print s, e, 100000;
for i in range(n-1):
	a = random.randint(1, 100000);
	b = random.randint(1, 100000);
	h = random.randint(1, 1000000);

	print a, b, h;
