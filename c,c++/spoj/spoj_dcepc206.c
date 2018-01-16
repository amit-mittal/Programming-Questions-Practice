#include<stdio.h>

//here use divide and conquer approach, just like count no. of inversions- there we used to count here have to add such entries
//and it is reverse of inversion
//merge sort type approach
//ans = ans(upper half) + ans(lower half) + total(b/w 2 arrays)

int main()
{
	int t,i,j,n,a[100005];
	unsigned long long int sum;
	
	scanf("%d",&t);
	
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;++i)
		{
			scanf("%d",&a[i]);
			for(j=0;j<i;++j)
			{
				if(a[j]<a[i])
					sum+=a[j];
			}
		}
		printf("%lld\n",sum);
	}
	
	return 0;
}
