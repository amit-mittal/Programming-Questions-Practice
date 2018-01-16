#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
int t,i,j,f,n,a[101];
scanf("%d",&t);
while(t-->0)
	{
	j=1;f=0;
	scanf("%d",&n);
	while(j<=n)
		{
		scanf("%d",&a[j]);
		++j;		
		}
	j=1;
	while(j<=n)
		{
		while(a[j]>=j)
			{
				++f;
				a[j]=a[j]-j;
			}
		++j;
		}
	if(f%2==1)
		cout<<"ALICE\n";
	else
		cout<<"BOB\n";
	}

return 0;
}
