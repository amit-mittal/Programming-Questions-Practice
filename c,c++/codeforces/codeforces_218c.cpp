#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int n,a[1005]={0},i,x,y,b[1005]={0},count=-1;
	scanf("%d",&n);
	
	for(i=0;i<n;++i){
		scanf("%d %d",&x,&y);
		if(a[x]!=1 && b[y]!=1)
		{
			count++;
			a[x]=1;
			b[y]=1;
		}
	}
	printf("%d\n",count);
	
	return 0;
}
