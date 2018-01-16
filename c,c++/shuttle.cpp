#include<iostream>
#include<algorithm>
#include<numeric>
#include<stdio.h>

using namespace std;

int hcf(int a,int b)
{
	if(b==0)
		return a;
	else
		hcf(b,a%b);
}

int main()
{
	int test,i,j,n,count=0;
	scanf("%d\n",&test);
	
	while(test--)
	{
		count=1;
		scanf("%d",&n);
		
		for(i=2;i<n;++i)
		{
			/*j=0;
			int a[10002]={0};
			while(a[j]!=1)
			{
				a[j]=1;
				j+=i;
				j%=n;
			}
			if(accumulate(a,a+n,0)==n)
			{
				printf("%d\n",i);
				++count;
			}*/
			
			if(hcf(n,i)==1)
				++count;
		}
		
		printf("%d\n",count);
	}
}
