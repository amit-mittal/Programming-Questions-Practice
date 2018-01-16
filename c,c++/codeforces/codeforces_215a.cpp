#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int n,m,r,i,j,count=0,max=0;
	double intpart,fracpart,a[51],b[51];
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
		scanf("%lf",&a[i]);
	
	scanf("%d",&m);
	
	for(i=0;i<m;++i)
		scanf("%lf",&b[i]);
	
	int q;
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			double w=b[i]/a[j];
//			printf("%lf\n",w);
			
			fracpart = modf(w,&intpart);
			
			if(fracpart==0.0)
			{
				q=(int)intpart;
		//		printf("%d\n",q);
				
				if(q>max)
				{
					count=1;
					max=q;
				}
				else if(q==max)
					++count;
			}
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}
