#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int r1=0,p1=0,p2=5009,a,b,n,i;
	double r2;
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
	{
		scanf("%d",&b);
		
		if(b>r1)
			r1=b;
	}
//	printf("%d\n",r1);
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
	{
		scanf("%d",&b);
		
		if(b>p1)
			p1=b;
	}
	
//	printf("%d\n",p1);
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
	{
		scanf("%d",&b);
		
		if(b<p2)
			p2=b;
	}
	
//	printf("%d\n",p2);
	
	scanf("%d %d",&a,&b);
	
	r2=(double)(b*p1)/((b*p1)+(a*p2));
		
	r2=(double)r1*sqrt(r2);
	
	printf("%.12lf\n",r2);
	
	return 0;
}
