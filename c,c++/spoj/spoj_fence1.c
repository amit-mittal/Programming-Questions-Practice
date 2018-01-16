#include<stdio.h>
#include<math.h>

const double con=0.5/acos(-1);

int main(void)
{
	int num;
	scanf("%d",&num);
	while(num!=0)
	{
		printf("%.2lf\n",con*num*num);
		scanf("%d",&num);
	}

	return 0;
}
