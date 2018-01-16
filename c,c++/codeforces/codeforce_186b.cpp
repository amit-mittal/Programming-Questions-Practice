#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>

using namespace std;

double func(int t1,int t2,int u,int v,int k)
{
	double c1,c2;
	
	c1=u*t1;
	c1=(double)(c1*(100-k)/100);
	c1+=(v*t2);
	
	c2=v*t1;
	c2=(double)(c2*(100-k)/100);
	c2+=(u*t2);
	
	return max(c1,c2);
}

int main()
{
	int a[1005],val,u,v,b[1005],d[1005],i,n,t1,t2,k;
	double c[1005];
	
	scanf("%d %d %d %d",&n,&t1,&t2,&k);
	
	for(i=0;i<n;++i)
	{
		scanf("%d %d",&u,&v);
	
		c[i]=func(t1,t2,u,v,k);
	}

//	sort(c,d,n);
	double max;
	int index,j;

	for(i=0;i<n;++i)
	{
		max=-1.0;
		
		for(j=0;j<n;++j)
		{
			if(c[j]>max)
			{
				max=c[j];
				index=j;
			}
		}
		c[index]=-2.0;
		
		printf("%d %.2lf\n",index+1,max);		
	}
	
	return 0;
}
