#include<stdio.h>
#include<iostream>

using namespace std;

//one more algo is using recursion by bisecting the squares again and again

bool pl(char a[][201],int i,int j,int k)
{
//	printf("%d %d %c\n",i,j,a[i][j]);
	if(a[i][j]=='1')
	{
//		printf("%d %d\n",i,j);
		if(a[i-k][j]=='1'&&a[i+k][j]=='1')
		{
	//		printf("%d %d\n",i,j);
			if(a[i][j+k]=='1'&&a[i][j-k]=='1')
			{
//				printf("%d %d\n",i,j);
				return 1;
			}
			else
				return 0;
		}
		else
			return 0;
	}
	else
		return 0;
}

int main()
{
	int n,i=1,j=1,k,count=0,val;
	char a[201][201];
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
			scanf("%c",&a[i][j]);
		getchar();
	}
		
	for(i=1;i<n-1;++i)
	{
		for(j=1;j<n-1;++j)
		{
			k=1;val=0;
			while((i-k>=0)&&(j-k>=0)&&(i+k<n)&&(j+k<n))
			{
				val=pl(a,i,j,k);
			//	printf("%d\n",val);
				if(val==1)
				{
					++count;
					k+=2;
				}
				else
					break;
			}
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}
