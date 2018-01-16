import random;

random.seed();
test = 100;

print test;
print 1000000000, 2;
for i in range(test-1):
	n = random.randint(2, 1000000000);
	k = random.randint(2, n);

	print n, k;
