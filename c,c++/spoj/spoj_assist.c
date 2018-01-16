#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,j,count,val;
	
	scanf("%d",&n);
	while(n!=0)
	{
		int a[40000]={0};
		
		i=2;count=0;
		while(count<n)
		{
			if(a[i]==0)
			{
				++count;val=i;
				while(val<100)
				{
					a[val]=1;int m=0;
					while(m<=i)
					{
						if(a[val]==0)
							++m;
						else
							++val;
					}
					printf("%d\n",val);
				}
			}
			++i;
				
//			printf("%d\n",i);
		}
		
		printf("%d\n",i);
		scanf("%d",&n);
	}
}
