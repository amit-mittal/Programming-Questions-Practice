#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
int t,f,i,n,a[35],j,b[35],l;

scanf("%d",&t);

while(t>0)
	{f=0;
	scanf("%d",&n);

	for(i=0;i<n;++i)//pie
		scanf("%d",&a[i]);
	
	for(i=0;i<n;++i)//sort pie
	{
	for(j=i+1;j<n;++j)
		{
		if(a[j]<a[i])
			{
			l=a[j];
			a[j]=a[i];
			a[i]=l;
			}
		}

	}

	for(i=0;i<n;++i)//racks
		scanf("%d",&b[i]);

	for(i=0;i<n;++i)//sort rack max
	{
	for(j=i+1;j<n;++j)
		{
		if(b[j]<b[i])
			{
			l=b[j];
			b[j]=b[i];
			b[i]=l;
			}
		}

	}

	for(i=0;i<n;++i)
		{
		for(j=0;j<n;++j)
			{
			if(b[j]>=a[i])
				{
				b[j]=0;
				++f;
				break;
				}
			}
		
		}
	printf("%d\n",f);
	--t;
	}

return 0;
}
