#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
int n,f,j,l;

for(n=0;n<10;++n)
	{
	f=0;
	int a[42]={0};
	for(j=0;j<10;++j)
		{
		scanf("%d",&l);
		++a[l%42];
		}
	for(j=0;j<42;++j)
		{	
		if(a[j]>0)
			++f;
		}
	printf("%d\n",f);
	}

return 0;
}
