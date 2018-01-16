import math
f=math.factorial
g=lambda x,y:f(x)/f(y)/f(x-y)
t=int(raw_input())
for i in xrange(t):
 n=map(int,raw_input().split())
 print g(n[0],n[1])