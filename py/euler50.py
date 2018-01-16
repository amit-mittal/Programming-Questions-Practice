max = 1000000

n = [1] * max
c = 2
t = 0
array=[]

while c<max:
	array.append(c)
        i = c
        while i < max:
                n[i] = 0
                i += c
        while c<max and n[c]==0:
                c += 1


#print array
if 4 in array:
	print 'hi'
else:
	print 'no'

"""a=[1,2,3,4]
del a[2]

print a"""
