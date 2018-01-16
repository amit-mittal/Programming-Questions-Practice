a=raw_input()
b=a.split()
withdraw=eval(b[0])
balance=eval(b[1])

if withdraw%5==0 and (withdraw + 0.5)<balance:
	balance-=withdraw+0.5
	print "%.2f" % balance
else:
	print "%.2f" % balance

