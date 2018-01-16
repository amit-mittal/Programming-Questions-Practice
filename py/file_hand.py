"""from time import time

def bigOne():
    start=time()
    lis=file("test.txt").read()
    MAX=[]
    for a in range(0,995):
            temp=lis[a:a+5]
           #print temp
            temp2=(int(temp[0])*int(temp[1])*int(temp[2])*int(temp[3])*int(temp[4]))
            MAX.append(temp2)
    print max(MAX)
    tt=time()-start
    print ".................time..........."
    print tt
   

if __name__=="__main__" :
    bigOne()
"""
#alternate mathod
"""
m = 0
for x in range(len(s)-5):
     p = reduce(lambda a, b:a*b, [int(i) for i in s[x:x+5]])
     if p>m:m = p
print m
"""

#another alternate

from string import whitespace
from operator import mul

data = open('test.txt') # Number pasted to file.
#print data.read()
#nos = [int(c) for line in data for c in line if c not in whitespace]

#this is to read character by character
"""
lines=data.readlines()
for line in lines:
	for c in line:
		print c"""
#print max([reduce(mul, nos[i:i+5]) for i in range(len(nos)-5)])

