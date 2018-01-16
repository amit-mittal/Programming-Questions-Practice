p1=-1
p2=1
p=0
c=0
nResult=0
for i in range(100,1000):
    for j in range(100,1000):
	n=str(i*j);
	if n==n[::-1] and (i*j) > nResult:
	    nResult = (i*j)
			#print p1,p2,r
	
print nResult
