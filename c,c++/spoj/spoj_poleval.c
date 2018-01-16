#include<stdio.h>
#include<math.h>

int main()
{
	int degree,i,co[1002]={0},test,sum,num,j,val,cas=1,r;
	
	scanf("%d",&degree);
	while(degree!=-1)
	{
		printf("Case %d:\n",cas);
		for(i=degree+1;i--;)
			scanf("%d",&co[i]);

		scanf("%d",&test);

		for(i=0;i<test;++i)
		{
			sum=0;
			scanf("%d",&num);
			val=num;r=co[0];
			for(j=0;j++<degree;val*=num)
			{
				r += val * co[j];
			}
			printf("%d\n",r);
		}

		scanf("%d",&degree);
		++cas;
	}
	return 0;
}
