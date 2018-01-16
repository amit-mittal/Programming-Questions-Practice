unsigned long long int palindrome(unsigned long long int n)
{
unsigned long long int s=0,q,r;
q=n;

while(q>0)
	{
	r=q%10;
	s=s*10+r;
	q=q/10;
	}

if(s==n)
	return n;
else
	return 0;
}
