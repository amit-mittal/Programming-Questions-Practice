#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k,test,end,a[100006],c[100006],n,val;

	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&n);
		
		for(i=1;i<=n;++i)
			scanf("%d",&a[i]);
			
		end=n;
		while(end>2)
		{
			int b[100006]={0};
			i=0;
			while(val<=end)
			{
				val=pow(2,i);
				++i;
				b[(int)val]=1;
			}
			
			j=1;
			for(i=1;i<=end;++i)
			{
				if(b[i]==0)
				{
					c[j]=a[i];
					++j;
				}
			}
			
			printf("%d\n\n",j);
			
			for(i=1;i<=j;++i)
				a[i]=c[i];
			end=j;
		}
		
		for(i=1;i<=end;++i)
			printf("%d ",a[i]);
		printf("\n");
	}
	
	return 0;
}
