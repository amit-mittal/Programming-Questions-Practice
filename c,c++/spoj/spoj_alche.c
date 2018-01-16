#include<stdio.h>

int main()
{
	int l,w;
	scanf("%d %d",&l,&w);
	while((l!=-1)&&(w!=-1))
	{
		if((float)l/1000==(float)w/37)
			printf("Y\n");
		else
			printf("N\n");			
		scanf("%d %d",&l,&w);
	}
	return 0;
}
