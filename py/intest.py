a=raw_input()
b=a.split()

test=eval(b[0])
divisor=eval(b[1])

counter=0

for i in range(test):
	number=input()
	if number%divisor==0:
		counter+=1

print counter
