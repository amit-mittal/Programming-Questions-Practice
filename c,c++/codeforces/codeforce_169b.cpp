#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	char ch;
	int n,a[100005],b[100005],c[100005],i,j,lena,lenb;
	
	i=0;
	while(1)
	{
		ch=getchar();
		if(ch!='\n')
		{
			a[i]=ch-'0';
			++i;
		}
		else
			break;
	}
	lena=i;
	
	i=0;
	while(1)
	{
		ch=getchar();
		if(ch!='\n')
		{
			b[i]=ch-'0';
			++i;
		}
		else
			break;
	}
	lenb=i;
		
	sort(b,b+lenb);
	
	j=0;
	for(i=lenb-1;i>=0&&j<lena;)
	{
		if(b[i]>a[j])
		{
			a[j]=b[i];
			++j;
			--i;
		}
		else
			++j;
	}

	for(i=0;i<lena;++i)
		printf("%d",a[i]);
		
	printf("\n");
	
	return 0;
}
