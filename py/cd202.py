string=raw_input()

i=0
out=''

while i<len(string):
	if string[i] in 'aeiou':
		out+=string[i]
		i+=3
	else:
		out+=string[i]
		i+=1

print out
