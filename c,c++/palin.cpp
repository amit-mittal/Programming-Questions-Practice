#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
unsigned long long int t,i,j;

char n[1000000];
int a[1000000];

scanf("%lld",&t);

while(t-->0)
	{
	scanf("%s",n);
	n[strlen(n)]='\0';
	i=0;
	while(n[i]!='\0')
		{
		a[i]=n[i]-48;
//		cout<<a[i]<<" ";		
		++i;
		}
	--i;
//	cout<<i<<endl;
	while(1)
		{
		++a[i];
//		cout<<a[i]<<endl;
		for(j=i;j>=0;--j)
			{
			if(a[j]>9)
				{
				a[j-1]=a[j-1]+(a[j]/10);
				a[j]=a[j]%10;
				}
			else
				break;
			}

		int f=-1;

		for(j=0;j<=(int)i/2;++j)
			{
			if(a[j]==a[i-j])
				{
				++f;
				continue;
				}
			else
				break;
			}
		if(f==(int)i/2)
			{
			for(j=0;j<=i;++j)
				{
				printf("%d",a[j]);
				}
			break;
			}
		}
	cout<<endl;
	}

return 0;
}
