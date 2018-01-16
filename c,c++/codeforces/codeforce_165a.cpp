#include<iostream>
#include<cstdio>
#include<numeric>
#include<algorithm>

using namespace std;

int main()
{
	int n,a[2002][2002]={0},x,y,f1,f2,f3,f4,i,j,k,count=0;

	scanf("%d",&n);
	
	for(i=0;i<n;++i)
	{
		scanf("%d %d",&x,&y);
		a[x+1000][y+1000]=1;
	}
	
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			f1=0;k=j-1;//towards left
			while(f1==0&&k>=0)
			{
				if(a[i][k]==1)
				{
					f1=1;
					break;
				}
				--k;
			}
			
			f2=0;k=j+1;//towards right
			while(f2==0&&k<2002)
			{
				if(a[i][k]==1)
				{
					f2=1;
					break;
				}
				++k;
			}
			
			f3=0;k=i-1;//up
			while(f3==0&&k>=0)
			{
				if(a[k][j]==1)
				{
					f3=1;
					break;
				}
				--k;
			}
			
			f4=0;k=i+1;//towards down
			while(f4==0&&k<2002)
			{
				if(a[k][j]==1)
				{
					f4=1;
					break;
				}
				++k;
			}
			
			if(f1==1&&f2==1&&f3==1&&f4==1)
				++count;
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}
