#include<stdio.h>
#include<math.h>

int main()
{
	int g,b;
	scanf("%d %d",&g,&b);
	while((g!=-1)&&(b!=-1))
	{
		if(g>=b)
			printf("%d\n",(int)ceil((float)g/(b+1)));
		else
			printf("%d\n",(int)ceil((float)b/(g+1)));
		scanf("%d %d",&g,&b);
	}
	return 0;
}
