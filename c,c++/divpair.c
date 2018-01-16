#include<stdio.h>

int main()
{
	long long int test,n,m,num,i,temp,count1,count2,time,rem;
	long long int total;
	
	scanf("%lld",&test);
	
	while(test--)
	{
		total=0;
		scanf("%lld %lld",&n,&m);
		
		num=n/m;
		rem=n%m;
		
		total+=(num*(num-1)/2);//for zero
		
		if(m&1)//odd
		{
			if(rem>m/2)
			{
				count1=num+1;
				time=rem-m/2;
				total+=time*count1*(num+1);
				total+=(m/2-time)*count1*num;
			}
			else
			{
				count2=num;
				time=rem;
				total+=time*(num+1)*count2;
				total+=(m/2-time)*num*count2;
			}
		}
		else
		{
			if(rem>m/2)
			{
				count1=num+1;
				time=rem-m/2;
				total+=(num*(num+1)/2);
				total+=time*count1*(num+1);
				total+=(m-rem-1)*count1*num;
			}
			else if(rem<m/2)
			{
				count2=num;
				time=rem;
				total+=time*(num+1)*count2;
				total+=(m/2-time-1)*num*count2;
				total+=(num*(num-1)/2);
			}
			else if(rem==m/2)
			{
				count1=num+1;
				total+=(m/2-1)*count1*num;
				total+=(count1*(count1-1)/2);
			}
		}
		
		printf("%lld\n",total);
	}
	
	return 0;
}
