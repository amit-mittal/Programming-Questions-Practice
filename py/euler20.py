from sets import Set
import math

fact=[]
a=math.factorial(100)
fact.extend(repr(a))
print fact

#print reduce(lambda x,y:x+y ,fact)

sum1=0
i=0

while i<len(fact)-1:
	sum1+=int(fact[i])
	i+=1
print sum1

#alternate
reduce(lambda x, y: x + y, [int(i) for i in str(reduce(lambda x, y: x * y, range(1, 100)))])
