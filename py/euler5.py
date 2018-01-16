
n = 12252240 # result from n = 18
k = 20
found = False
  
while not found:
	n += k
	found = True
    	for i in range(k - 1, 0, -1):
      		if n / i != n / float(i):
        		found = False
        		break
  
print n
