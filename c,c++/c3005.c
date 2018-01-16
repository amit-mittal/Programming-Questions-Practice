#include<stdio.h>
#include<math.h>

int main()
{
	long double x,y,value,num=1,l,s,i,j,m;

	scanf("%Lf %Lf",&x,&y);
	
	if(x>y)
	{
		l=x;s=y;
	}
	else
	{
		l=y;s=x;
	}
	if((x!=0)||(y!=0))
	{
	for(i=l+1;i<=l+s;++i)
		num*=i;
	for(j=1;j<=s;++j)
		num/=j;
	}
	else
		num=0;	
	printf("%.0Lf",num);
	
	return 0;
}
