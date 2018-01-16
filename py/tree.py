MOD = (10**9) + 7

line = raw_input()
a = line.split(" ")
n = int(a[0])
k = int(a[1])

if(k==1):
	ans = n**(n-2)
elif(k==2):
	ans = (((2*n) - 2)**n)%MOD
	ans = ans*((2*n)**(n-2))
else:
	ans = (((3*n) - 3)**(2*n))%MOD
	ans = ans*((3*n)**(n-2))

ans = int(ans)%MOD
if(ans<0):
	ans = 0
print int(ans)