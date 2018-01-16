#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
int n,a[100001],b[100001],i,j;

while(1)
{
scanf("%d",&n);

if(n==0)
	break;
else
	{
	int f=0;
	for(i=1;i<=n;++i)
		{
		scanf("%d",&a[i]);
		}
	for(i=1;i<=n;++i)
		{/*j=1;
		while(1)
			{
			if(a[j]==i)
				break;
			else
				++j;
			}
		b[i]=j;

		if(a[i]==b[i])
			continue;
		else
			{
			++f;
			break;
			}*/
		if(i==a[a[i]])
			continue;
		else
			{
			++f;
			break;
			}
		}

	if(f>0)
		printf("not ambiguous\n");
	else
		printf("ambiguous\n");	
	}	
}

return 0;
}
