#include<stdio.h>

int main()
{
	int test,i,ans,rem,n,val;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&n);
		rem=n%7;
		
		switch(rem)
		{
			case 0:
				val=0;
				break;
			case 1:
				val=2;
				break;
			case 2:
				val=4;
				break;
			case 3:
				val=6;
				break;
			case 4:
				val=1;
				break;
			case 5:
				val=3;
				break;
			case 6:
				val=5;
				break;
		};
		
		ans=n-(4*val);
		if(ans>=0)
			printf("%d\n",ans);
		else
			printf("-1\n");
	}
	
	return 0;
}
