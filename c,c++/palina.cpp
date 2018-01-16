#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
int t,i,j,c;

char n[1000009];
int a[1000009];

scanf("%d",&t);

while(t-->0)
	{
	scanf("%s",n);
	
	for(i=0;i<strlen(n);++i)
		{
		a[i]=n[i]-48;
//		cout<<a[i]<<" ";		
		}
	--i;
//	cout<<i<<endl;
	
		c=0;
//		cout<<a[i]<<endl;

		if((i%2==0)&&(a[(i/2)-1]==a[(i/2)+1]))
		{
			++a[i/2];	
		}
	
		for(j=(int)i/2;j>=0;--j)
			{
			
			if(c==0)
				{
				if(a[j]>=a[i-j])
					{
					++c;
					a[i-j]=a[j];
					}
				else
					{
					++c;
					++a[j];
					a[i-j]=a[j];
					}
				}
			else
				{
				a[i-j]=a[j];
				}
			}
	

	
			
		
			
			for(j=0;j<=i;++j)
				{
				printf("%d",a[j]);
				}
	cout<<endl;
	}

return 0;
}
