#include<stdio.h>
#include<stdlib.h>

int main()
{
	int test,*p,i,j,num,count;
	char c;

	scanf("%d",&test);
	scanf("%c",&c);

	while(test--)
	{
		count=0;
		scanf("%d",&num);
		p=malloc(num*sizeof(int));

		for(i=0;i<num;++i)
			scanf("%d",&p[i]);
		
		for(i=0;i<num-1;++i)
		{
			for(j=i+1;j<num;++j)
			{
				if(p[i]>p[j])
					++count;
			}
		}
		scanf("%c",&c);

		printf("%d\n",count);
	}

	return 0;
}
