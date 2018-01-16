try:
    import psyco
    psyco.full()    
except ImportError:
    pass

def main():
    import time
    startTime = time.time()
    
    num = 1
    initialMult = 2
    while 1:        
        temp = num*initialMult

        tempList = []
        tempList2 = []   
        
        tempList.extend(repr(num))
        tempList2.extend(repr(temp))    
	
        tempList.sort()
	tempList2.sort()    

        if tempList == tempList2:
            if initialMult == 6:
                print "found: %s" % (num, )
                endTime = time.time()
                print "completed in %s seconds" % (endTime - startTime, )
                
                break
            else:
                initialMult += 1
                continue
        else:
            num += 1
            initialMult = 2
            if num % 10000 == 0: print "reached %s" % (num, )
            continue

if __name__ == '__main__':
    main()

#alternate method
"""def main(): 
	from itertools import count
	from sets import Set
	for i in count(1):
		if Set(str(2*i)) == Set(str(3*i)) == Set(str(4*i)) == Set(str(5*i)) == Set(str(6*i)):
			print i
			break
main()"""
