#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n,k,i,a[105];
	
	scanf("%d %d",&n,&k);
	
	for(i=0;i<=2*n;++i)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;++i)
	{
		if(k>0)
		{
			if((a[(2*i)+1]-a[(2*i)])>=2 && (a[(2*i)+1]-a[(2*i)+2])>=2)
			{
				a[(2*i)+1]-=1;
				--k;
			}	
		}
		else
			break;
	}

	for(i=0;i<=2*n;++i)
		printf("%d ",a[i]);
	
	return 0;
}
