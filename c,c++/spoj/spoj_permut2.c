#include<stdio.h>
#include<stdlib.h>

int main()
{
	int test,*a,i,j,f;
	scanf("%d",&test);
	while(test!=0)
	{
		f=0;
		a=malloc((test+1)*sizeof(int));
		for(i=1;i<=test;++i)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=test;++i)
		{
			if(a[a[i]]==i)
				++f;
			else
				break;
		}
		if(f==test)
			printf("ambiguous\n");
		else
			printf("not ambiguous\n");

		scanf("%d",&test);
	}

	return 0;
}
