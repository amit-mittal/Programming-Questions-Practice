a=raw_input("Enter the number:")
a=int(a)
array=[]

while a>0:
	r=a%10
	a=a/10
	array.append(r)

array=array[::-1]

print ord('A')
print chr(65)

print array
