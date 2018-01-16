#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	int t;
	int rest,n,i,j,r;
	scanf("%d",&t);
	
	while(t--)
	{
		int c=0;
		scanf("%d",&n);
		//if prime no. can be written as sum of 2 squares then it is of form 4m+1
		if(n>4)
		{
			r=n%4;
			if(r==1)
				c=1;
		}
		else if(n==2)
			c=1;
		
		if(c==1)
			printf("YES\n");
		else
			printf("NO\n");
		
	}

	return 0;
}
