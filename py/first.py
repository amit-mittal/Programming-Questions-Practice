#!/usr/bin/env python

"my first program"

import sys
import string

#filename=raw_input("Enter the filename: ");

#try:
#	fh=open(filename,'r')
#	print "successful"
#except:
#	print "not successful"

mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)

print mylist[0] # prints out 1
print mylist[1] # prints out 2
print mylist[2] # prints out 3

for x in mylist:
	print x

even_numbers = [2,4,6,8]
odd_numbers = [1,3,5,7]
all_numbers = odd_numbers + even_numbers

print all_numbers

primes = [2,3,5,7,8]
for prime in primes:
    print prime

