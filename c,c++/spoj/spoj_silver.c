#include<stdio.h>
#include<math.h>

int main()
{
	int n,val;

	scanf("%d",&n);
	
	while(n!=0)
	{
		int sum=1;
		val=log(n)/log(2);
		
		printf("%d\n",val);
		
		scanf("%d",&n);
	}
	
	return 0;
}
