#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
double t,nails,i,j,s,in,p,frac,x,y,z,f;

scanf("%lg",&t);

while(t-->0)
	{f=0;
	scanf("%lg",&nails);

	scanf("%lg",&x);
	scanf("%lg",&y);
	scanf("%lg",&z);
	
	for(i=9;i>0;--i)
		{
		for(j=9;j>=0;--j)
			{
			s=10000*i+1000*x+100*y+10*z+j;
			p=s/nails;
			frac=modf(p,&in);
			if(frac==0)
				{
				++f;
				printf("%lg %lg %lg\n",i,j,p);
				break;
				}
			}
		if(f==1)
			break;
		
		}
	if(f==0)
		{
		printf("0\n");
		}
	}

return 0;
}
