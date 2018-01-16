#include<stdio.h>

int main()
{
	int test,g,m,i,gm=0,mm=0;
	int go=0,ma=0;
	scanf("%d",&test);


	while(test--)
	{
		gm=-1,mm=-1;
		scanf("%d %d",&g,&m);
		for(i=0;i<g;++i)
		{
			scanf("%d",&go);
			if(go>=gm)
				gm=go;
		}

		for(i=0;i<m;++i)
		{
			scanf("%d",&ma);
			if(ma>=mm)
				mm=ma;
		}
	
		if(gm>=mm)
			printf("Godzilla\n");
		else
			printf("MechaGodzilla\n");
	}
	return 0;
}
