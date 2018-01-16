#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
int test,n,num,l,i,ans;

scanf("%d",&test);

while(test--)
	{
	scanf("%d",&n);
	int array[10001]={0};
	while(n--)
		{
		scanf("%d",&num);
		++array[num];
		}

	l=array[0];
	for(i=0;i<10001;++i)
		{
		if(array[i]>l)
			{
			l=array[i];
			ans=i;
			}
		}
	printf("%d %d\n",ans,l);
	}
return 0;
}
