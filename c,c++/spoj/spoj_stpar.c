#include<stdio.h>

int main()
{
	int num,count,i,a[1002],b[1002],val,last,c;
	scanf("%d",&num);

	while(num!=0)
	{
		count=0;
		for(i=0;i<num;++i)
		{
			scanf("%d",&a[i]);
		}

		i=0;val=1;last=0;c=0;

		while((i<=num)||(last>0))
		{

		if(i<=num)
			{
			if(a[i]==val)
			{
				val++;
				++i;
				++c;
			}
			else
			{
				if((b[last]==val))
				{
					last--;
					++val;
					++c;
				}
				else
				{
					last++;
					b[last]=a[i];
					++i;
				}
			}
		}
		else
		{
			last--;
		}
//			printf("%d %d %d\n",i,last,c);
		}
//		printf("%d\n",c);
//		--c;

		if(c==num)
			printf("yes\n");
		else
			printf("no\n");

		scanf("%d",&num);
	}

	return 0;
}
