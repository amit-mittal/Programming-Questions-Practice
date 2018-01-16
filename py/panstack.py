MOD=1000000007
	
#test=int(raw_input())
test=1
while test>0:
	for n in range(600,1001):
		initial=1;
		for i in range(1,n):
			initial=3*initial-1;
		initial=initial%MOD
		print "%d," % initial,
		test=test-1
