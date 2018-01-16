#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int n,v,a[5]={0},car=0,temp,i;

	scanf("%d",&n);
	
	for(i=0;i<n;++i)
	{
		scanf("%d",&v);
		++a[v];
	}
	
	car+=a[4];
	car+=(a[2]/2);
	temp=a[2]%2;
	
	if(temp==1)
	{
		a[1]-=2;
		car++;
	}
	
	if(a[3]>=a[1])
	{
		a[1]=0;
		car+=a[3];
	}
	else
	{
		car+=a[3];
		a[1]-=a[3];a[3]=0;
	}
	
	car+=(a[1]/4);
	
	temp=a[1]%4;
	if(temp>0)
		car++;
	
	printf("%d\n",car);
	
	return 0;
}
