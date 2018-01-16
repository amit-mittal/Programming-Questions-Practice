#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

/*bool gr(int n)
{
	if()
}
*/
int main()
{
	int n,i,j,max=-1,count,a[500],b[500],min,mx;

	scanf("%d",&n);
	
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
		
	for(i=0;i<n;++i)
		scanf("%d",&b[i]);
	
	min=*min_element(a,a+n);
	mx=*max_element(b,b+n);
	
	for(i=min;i<mx;++i)
	{
		count=1;
		for(j=0;j<n;++j)
		{
			if((b[j]>i)&&(a[j]<i+1))
			{
				++count;
			}
		}
		if(count>max)
		{
//			printf("i=%d\n",i);
			max=count;
		}
	}
	
	printf("%d\n",--max);
	
	return 0;
}
