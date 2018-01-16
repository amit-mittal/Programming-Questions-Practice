import random

def lottery():
    #returns 6 numbers between 1 and 40
    for i in xrange(6):
        print random.randint(1, 40)

    # returns a 7th number between 1 and 15
    # yield random.randint(1,15)

if __name__=='__main__':
	print 'yes'
	print lottery.__doc__
