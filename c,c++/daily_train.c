#include <stdio.h>
#include <stdlib.h>

long double comb(long double n,long double r)
{
	long double i;
	long double pro=1;
	for(i=n;i>r;--i)
	{
		pro*=i;
	}
	for(i=1;i<=n-r;++i)
	{
		pro/=i;
	}
	return pro;
}

int main()
{
    long double x,n,count=0,c;
    char a[70];
    int i,j;

    scanf("%Lf %Lf",&x,&n);
    while(n--)
    {
        scanf("%s",a);
        j=0;
        
        for(i=0;i<33;i+=4)
        {
        	c=0;
            if(a[i]=='0') ++c; if(a[i+1]=='0') ++c; if(a[i+2]=='0')++c; if(a[i+3]=='0')++c; if(a[53-j]=='0') ++c; if(a[53-j-1]=='0')++c;
            if(c>=x)
                count+=comb(c,x);
            j+=2;
        }
    }
    printf("%.0Lf\n",count);
    return 0;
}
