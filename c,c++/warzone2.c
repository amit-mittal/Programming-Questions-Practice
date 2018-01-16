#include<stdio.h>

int main()
{
	int num,i,a[2002][2];

	scanf("%d",&num);
	
	for(i=0;i<num;++i)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	
	for(i=0;i<num-3;++i)
	{
		for(j=i+1;j<num-2;++j)
		{
			for(k=j+1;k<num-1;++k)
			{
				for(l=0;l<num;++l)
				{
					d1x=a[i][0]-a[j][0];
					d2x=a[i][0]-a[k][0];
					d3x=a[i][0]-a[l][0];
					d4x=a[j][0]-a[k][0];
					d5x=a[j][0]-a[l][0];
					d6x=a[k][0]-a[l][0];
					
					d1y=a[i][1]-a[j][1];
					d2y=a[i][1]-a[k][1];
					d3y=a[i][1]-a[l][1];
					d4y=a[j][1]-a[k][1];
					d5y=a[j][1]-a[l][1];
					d6y=a[k][1]-a[l][1];
					
					if(((d1x*d6y)==(d1y*d6x))&&())
						++count;
					else if((d1x*d2y)==(d1y*d2x))
						++count;
					else if((d1x*d2y)==(d1y*d2x))
						++count;
				}
			}
		}
	}
	
	return 0;
}
