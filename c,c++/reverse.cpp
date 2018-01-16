int reverse(int n)
{
int q,s,r;
q=n;s=0;

while(q>0)
	{
	r=q%10;
	s=10*s+r;
	q=q/10;
	}

return s;
}
