#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

void sort(double a[][2],int n)
{
	int i,j;
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if((a[j][1]/a[j][0])>(a[i][1]/a[i][0]))
			{
				swap(a[j][0],a[i][0]);
				swap(a[j][1],a[i][1]);
			}
		}
	}
}

int main()
{
	int x,i;
	double a[10000][2],cost=0,temp,y;
	
	scanf("%d %lf",&x,&y);
	
	for(i=0;i<x;++i)
		scanf("%lf %lf",&a[i][0],&a[i][1]);
	
	sort(a,x);
	
//	for(i=0;i<x;++i)
//		printf("%lf %lf\n",a[i][0],a[i][1]);
	
	for(i=0;i<x&&y>0;++i)
	{
		if(a[i][0]<=y)
		{
			cost+=a[i][1];
			y-=a[i][0];
		}
		else
		{
			temp=y/a[i][0];
			cost+=(temp*a[i][1]);
			y=0;
		}
//		printf("%lf %lf\n",y,cost);
	}
	printf("%.6lf\n",cost);
	
	return 0;
}
