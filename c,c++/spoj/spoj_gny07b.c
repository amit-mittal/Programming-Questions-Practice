#include<stdio.h>

int main()
{
	int test,index;
	double quan,a;
	char string[4];

	scanf("%d",&test);
	for(index=1;index<=test;++index)
	{
		scanf("%lf",&quan);
		scanf("%s",string);

		if(string[0]=='k')
		{
			a=quan*2.2046;
			printf("%d %.4lf lb\n",index,a);
		}
		else if(string[1]=='b')
		{
			a=quan*0.4536;
			printf("%d %.4lf kg\n",index,a);
		}
		else if(string[0]=='l')
		{
			a=quan*0.2642;
			printf("%d %.4lf g\n",index,a);
		}
		else if(string[0]=='g')
		{
			a=quan*3.7854;
			printf("%d %.4lf l\n",index,a);
		}
//		printf("%d %.4lf \n",index);
	}

	return 0;
}
