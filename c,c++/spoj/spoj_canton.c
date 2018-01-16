#include<stdio.h>

int main()
{
	int test,num,nu,de,pro,l,diff;
	scanf("%d",&test);
	while(test--)
	{
		pro=0;l=1;
		scanf("%d",&num);

		while(pro<num)
		{
			pro=l*(l+1)/2;
			++l;
		}
		l--;
//		printf("l is%d\n",l);
		pro=l*(l-1)/2;
		diff=num-pro;

		if(l%2==0)
		{
			nu=diff;
			de=l+1-nu;
		}
		else
		{
			nu=l-diff+1;
			de=l+1-nu;
		}
		printf("TERM %d IS %d/%d\n",num,nu,de);
	}

	return 0;
}
