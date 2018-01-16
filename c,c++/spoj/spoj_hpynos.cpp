#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int a[]={1, 7, 10, 13, 19, 23, 28, 31, 32, 44, 49, 68, 70, 79, 82, 86, 91, 94, 97, 100, 103, 109, 129, 130, 133, 139, 167, 176, 188, 190, 192, 193, 203, 208, 219, 226, 230, 236, 239, 262, 263, 280, 291, 293, 301, 302, 310, 313, 319, 320, 326, 329, 331, 338, 356, 362, 365, 367, 368, 376, 379, 383, 386, 391, 392, 397, 404, 409, 440, 446, 464, 469, 478, 487, 490, 496};
	int n,q,r,count=0,sum,first;
	
	scanf("%d",&q);
	
	n=q;
	
	sum=0;
	while(n!=1)
	{
		sum=0;
		while(n>0)
		{
			r=n%10;
			sum+=r*r;
			n/=10;
		}
		n=sum;
		++count;
		
		if(n<500)
		{
			if(!binary_search (a,a+79,n))
			{
				printf("-1\n");
				return 0;
			}
		}
	}
	//happy nos are of form 10^n+3 and 10^n+9
	printf("%d\n",count);
	
	return 0;
}
