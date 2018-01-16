#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

const unsigned INF = 1 << 30;

void sort(int a[][2],int n)
{
	int i,j;
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[j][1]>a[i][1])
			{
				swap(a[j][1],a[i][1]);
				swap(a[j][0],a[i][0]);
			}
		}
	}
}

int main()
{
	int test;
	scanf("%d",&test);
	
	while(test--)
	{
		long long int e,j,mins=INF,f,n,i,coin,amount,w,w1;
		int a[501][2];	

		scanf("%lld %lld",&e,&f);
		scanf("%lld",&n);
		
		for(i=0;i<n;++i)
			scanf("%d %d",&a[i][0],&a[i][1]);
		
		sort(a,n);
		
		w=f-e;//weight of coins
//		printf("%lld\n",w);
		
		for(i=0;a[i][1]<=w&&i<n;++i)
		{
			w1=w;
			amount=0;
			j=i;
			while(w1>0&&j<n)
			{
				coin=w1/a[j][1];
//				printf("coin=%lld w=%lld amount=%lld\n",coin,w1,amount);
				amount+=(coin*a[j][0]);
				w1=w1%a[j][1];
				++j;
			}
			if(w1==0)
			{
				mins=min(mins,amount);
//				printf("mins=%lld\n",mins);
			}
		}
		if(mins!=INF)
		{
			printf("The minimum amount of money in the piggy-bank is %lld.\n",mins);
		}
		else
		{
			printf("This is impossible.\n");
		}
		
	}
	
	return 0;
}
