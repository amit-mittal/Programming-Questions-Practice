max = 2000000

n = [1] * max
c = 2
t = 0

while c<max:
        t += c
        i = c
        while i < max:
                n[i] = 0
                i += c
        while c<max and n[c] == 0:
                c += 1

print t

import sys
sys.path.append( <path to dirFoo> )
import Bar
#to import some othe module
