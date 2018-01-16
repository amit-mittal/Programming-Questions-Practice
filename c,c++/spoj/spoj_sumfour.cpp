#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int r,a[4005],b[4005],c[4005],d[4005],i,j,k,l,count=0,sum;
	scanf("%d",&r);
	
	for(i=0;i<r;++i)
		scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);

	sort(a,a+r);sort(b,b+r);sort(c,c+r);sort(d,d+r);

	for(i=0;i<r;++i)
	{
		for(j=0;j<r;++j)
		{
			l=r-1;
			for(k=0;k<r;++k)
			{
				for(;l>=0;--l)
				{
					sum=a[i]+b[j]+c[k]+d[l];
					if(sum==0)
					{
						++count;
//						printf("%d %d %d %d\n",a[i],b[j],c[k],d[l]);
					}
					else if(sum<0)
						break;
				}
//				++l;
			}
		}
	}
	printf("%d\n",count);

	return 0;
}
