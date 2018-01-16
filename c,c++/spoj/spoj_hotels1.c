#include<stdio.h>
 
int subArraySum(long long int arr[],long long int n,long long int sum)
{
    int curr_sum = arr[0], start = 0, i,max=0;
 
    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
 
        // If curr_sum becomes equal to sum, then return true
        if (curr_sum == sum)
        {
            return curr_sum;
        }
        
        if(curr_sum>max && curr_sum<=sum)
        	max=curr_sum;
 
        if (i < n)
          curr_sum = curr_sum + arr[i];
    }
    
    return max;
}
 
// Driver program to test above function
int main()
{
	long long int n,m,arr[300005],i,sum=0,j,max=0;
	
	scanf("%lld %lld",&n,&m);
	
	for(i=0;i<n;++i)
		scanf("%lld",&arr[i]);

    max=subArraySum(arr, n, m);

	printf("%lld\n",max);

    return 0;
}
