#include<stdio.h>
#include<math.h>

int main()
{
	int test,count,val,q,len;

	scanf("%d",&test);
	
	while(test--)
	{
		count=0;
		scanf("%d",&val);
		
		if(val!=1)
		{
			q=(val-2)/5;
			++q;//row no.
			
			count=(val-2)%10;
			if(count<5)
				++count;//seat no.
			else
				count=10-count;//seat
				
//			printf("%d %d\n",q,count);
				
			if(count==1)
			{
				printf("%d W L\n",q);
			}
			else if(count==2)
			{
				printf("%d A L\n",q);
			}
			else if(count==3)
			{
				printf("%d A R\n",q);
			}
			else if(count==4)
			{
				printf("%d M R\n",q);
			}
			else if(count==5)
			{
				printf("%d W R\n",q);
			}		
		}
		else
			printf("poor conductor \n");
	}
	
	return 0;
}
