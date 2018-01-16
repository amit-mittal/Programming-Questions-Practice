#include<stdio.h>

int main()
{
	int test,rem;
	int a[]={0,1,1,2,3,5,8,3,1,4,5,9,4,3,7,0,7,7,4,1,5,6,1,7,
 8,5,3,8,1,9,0,9,9,8,7,5,2,7,9,6,5,1,6,7,3,0,3,3,6,
 9,5,4,9,3,2,5,7,2,9,1};
 	long long int n;
 
 	scanf("%d",&test);
 	
 	while(test--)
 	{
 		scanf("%lld",&n);
 		
 		rem=n%60;
 		if(rem==0)
 			printf("%d\n",a[59]);
 		else
 			printf("%d\n",a[rem-1]);
 	}
 
 	return 0;
 }
