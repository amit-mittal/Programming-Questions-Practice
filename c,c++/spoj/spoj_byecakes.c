#include<stdio.h>
#include<math.h>

int main()
{
	float a[8],r1,r2,r3,r4,max;
	int lim,i,l;
	
	for(i=0;i<8;++i)
		scanf("%f",&a[i]);
		
	while(a[0]!=-1)
	{
		r1=a[0]/a[4];
		r2=a[1]/a[5];
		r3=a[2]/a[6];
		r4=a[3]/a[7];
		
		if(r2>r1)
		{
			max=r2;
		}
		else
		{
			max=r1;
		}
	
		if(r3>max)
		{
			max=r3;
		}
		if(r4>max)
		{
			max=r4;
		}
	
		lim=(int)ceil(max);

		for(i=4;i<8;++i)
		{
			l=lim*a[i];
			printf("%d ",l-(int)a[i-4]);
		}
		printf("\n");
	
		for(i=0;i<8;++i)
			scanf("%f",&a[i]);
	}

	return 0;
}
