#include<iostream.h>

int pal(int p)
{
	int n,rev=0,dig;
	n=p;
		while(p>0)
			{
			dig = p % 10;
			rev = rev * 10 + dig;
			p = p / 10;
			}
			if (n == rev)
			return n;
}


main()
{
int i,j,p,l;

for(i=999;i>900;--i)
	{
	for(j=999;j>900;--j)
		{
		p=i*j;
		l=pal(p);
		cout<<l;
		}
	}

return 0;
}