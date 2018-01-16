#include<stdio.h>

int main()
{
	int test,n,m,num,i,temp,count1,count2;
	long long int total;
	
	scanf("%d",&test);
	
	while(test--)
	{
		total=0;
		scanf("%d %d",&n,&m);
		
		num=n/m;
		total+=(num*(num-1)/2);//count of zero
		
		if(m&1)//odd
		{
			for(i=1;i<=m/2;++i)
			{
				temp=n%m;
				if(temp>=i)
					count1=num+1;
				else
					count1=num;
					
				if(temp>=m-i)
					count2=num+1;
				else
					count2=num;
						
				total+=(count1*count2);
			}
		}
		else
		{
			temp=n%m;
			for(i=1;i<m/2;++i)
			{
				if(temp>=i)
					count1=num+1;
				else
					count1=num;
					
				if(temp>=m-i)
					count2=num+1;
				else
					count2=num;
						
				total+=(count1*count2);
			}
			
			if(temp>=m/2)
				count1=num+1;
			else
				count1=num;
		
			total+=(count1*(count1-1)/2);
		}
		
		printf("%lld\n",total);
	}
	
	return 0;
}
