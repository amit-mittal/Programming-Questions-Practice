import sys;
import socket;

try:
	s=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
except socket.error, msg:
	print "Failed to create socket" + msg[1]
	sys.exit();

print 'socket created'

host = 'http://www.google.com'

try:
	remote_ip = socket.gethostbyname( host )
except socket.gaierror:
	print "hostname not resolved"
	sys.exit()
	
print "IP address of " + host + "is " + remote_ip
