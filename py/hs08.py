open1=open('test.py','r')
line=open1.readlines()
open1.close()

for line1 in line:
	print line1

    # a look at file handling in Python
    # tested with Python24 vegaseat 29sep2005
     
    # set up a test string
    str1 = """There is no ham in hamburger.
    Neither apple nor pine are in pineapple.
    Boxing rings are square.
    Writers write, but fingers don't fing.
    If a vegetarian eats vegetables, what does a humanitarian eat?
    Overlook and oversee are opposites.
    Slim chance and fat chance are the same.
    A house can burn up as it burns down.
    """
     
    # more to test file appending
    str2 = """An alarm goes off by going on.
    Fill in a form by filling it out.
    """
     
    # let's create our test file by writing the test string to the working folder/directory with write()
    # modifier "w" is for writing text, use "wb" for binary data like images
    fout = open("English101.txt", "w")
    fout.write(str1)
    fout.close()
     
    # read back the entire test string as a string with read()
    # "r" is for reading text, use "rb" for binary data like images
    fin = open("English101.txt", "r")
    str3 = fin.read()
    fin.close()
    print "Contents of file English101.txt:"
    print str3
     
    # a similar read using try/except error handling
    # tested this out by deliberately changing the filename
    filename = "English102.txt"
    try:
    fin = open(filename, "r")
    str3 = fin.read()
    fin.close()
    print "Contents of file %s:" % filename
    print str3
    except IOError:
    print "File %s does not exist!" % filename
     
    print
     
    # append more text to an existing file with modifier "a"
    fout = open("English101.txt", "a")
    fout.write(str2)
    fout.close()
     
    # read the appended text file as a list of lines with readlines()
    fin = open("English101.txt", "r")
    lineList = fin.readlines()
    fin.close()
    print "Contents of appended file (first option):"
    for line in lineList:
    print line,
     
    print
     
    # a short-form to do this, uses readlines() internally
    # the comma at the end of print takes care of the extra newline character
    # note: Python does clean up and closes the file for you
    print "Contents of appended file (second option):"
    for line in open("English101.txt", "r"):
    print line,
     
    print
     
    # similar to above, but creating a list with list comprehension
    line_list = [line for line in open("English101.txt", "r")]
    print "A list of the text lines:"
    print line_list # test
     
    print
     
    # read just one line of text at a time
    print "The first two lines:"
    fin = open("English101.txt", "r")
    print "Line 1 =", fin.readline(),
    print "Line 2 =", fin.readline() # etc.
    fin.close()
     
    # show just the last line of text
    fin = open("English101.txt", "r")
    lineList = fin.readlines()
    fin.close()
    print "Last line =", lineList[-1],
    print "Total lines =", len(lineList)
     
    # the whole thing can be simplified (more cryptic though)
    lastLine = file("English101.txt", "r").readlines()[-1]
    print "Last line =", lastLine
     
    # do some random access of the file
    fin = open("English101.txt", "r")
    # seek index is zero based, so the 10th character would be position 9
    fin.seek(9)
    print "From character 10 to end of line =", fin.readline()
    print "End if this line is at character =", fin.tell()
    print
    num = 16
    pos = 80
    print "Read %d characters starting at position %d:" % (num, pos)
    fin.seek(pos)
    print fin.read(num)
    fin.close()
     
    print
     
    # read a particular line, lineNumber is zero based
    import linecache
    lineNumber = 5
    partLine = linecache.getline("English101.txt", lineNumber)
    print "Line %d = %s" % (lineNumber, partLine)
     
    print
     
    # processing the lines as you read them in and forming a list
    # using list comprehension
    list2 = [line.replace(".", "!") for line in open("English101.txt", "r")]
     
    # display the result
    print "Processing the lines as you read them in ..."
    print "Each period has been replaced with an exclamation mark:"
    for line in list2:
    print line,
     
    print; print
     
    # print to a file (a different option of write)
    fout = open( "test1.txt", "w" )
    print >>fout, "I love Monte Python!"
    fout.close()
     
    # a file exists if you can open and close it
    def exists(filename):
    try:
    f = open(filename)
    f.close()
    return True
    except:
    return False
     
    # what does file object fin look like?
    filename = 'test1.txt'
    if exists(filename):
    fin = open(filename)
    print "file object =", fin
    print "file content =", fin.read()
    fin.close()
    else:
    print "File %s does not exist!" % filename
     
    print
     
    # for large text files you can write and read a zipped file (PKZIP format)
    # notice that the syntax is mildly different from normal file read/write
    import zipfile
    zfilename = "English101.zip"
    zout = zipfile.ZipFile(zfilename, "w")
    zout.writestr(zfilename, str1 + str2)
    zout.close()
    # read the zipped file back in
    zin = zipfile.ZipFile(zfilename, "r")
    strz = zin.read(zfilename)
    zin.close()
    print "Testing the contents of %s:" % zfilename
    print strz
     
    print
     
    # read a binary image file, pick something you have ...
    # (also shows exception handling)
    filename = "Moo.jpg"
    try:
    fin = open(filename, "rb")
    data = fin.read()
    fin.close()
    print "This is a hex-dumb of %s:" % filename
    for c in data:
    print "%02X" % ord(c),
    print
    except IOError:
    print "Binary File %s not found" % filename
    #raise SystemExit # optional exit
     
    print
     
    # below is a typical Python dictionary object of roman numerals
    romanD1 = {'I':1,'II':2,'III':3,'IV':4,'V':5,'VI':6,'VII':7,'VIII':8,'IX':9,'X':10}
     
    # to save a Python object like a dictionary to a file
    # and load it back intact you have to use the pickle module
    import pickle
    print "The original dictionary:"
    print romanD1
    file = open("roman1.dat", "w")
    pickle.dump(romanD1, file)
    file.close()
    # now load the dictionay object back from the file ...
    file = open("roman1.dat", "r")
    romanD2 = pickle.load(file)
    file.close()
    print "Dictionary after pickle.dump() and pickle.load():"
    print romanD2
     
    print
     
    # module StringIO allows you to treat a data stream like a file
    # if you do a lot of processing, memory streams are much faster then file streams
    # (StringIO.StringIO is a class that can be inherited in a class of your own)
    print "You can stream text/data to memory ..."
    import StringIO
    stream1 = StringIO.StringIO(str2) # use the string str2 here, or read one in from a file
    print str2
     
    # show the memory where the object is located
    print stream1
     
    print
     
    print "... and use stream like a file:"
    print stream1.readline()
     
    # reset the stream to zero (beginning) and read all lines
    stream1.seek(0)
    list1 = stream1.readlines()
    print "All lines from beginning:"
    for item in list1:
    print item,
    print
    # reset the stream to position 9 and read the next 20 characters
    stream1.seek(9)
    print "Read 20 characters starting at position 9:"
    print stream1.read(20)
     
    # finally close the stream
    stream1.close()
