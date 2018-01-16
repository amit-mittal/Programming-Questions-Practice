#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main()
{
	int t,i,c,mi,ma,next,prev,a[100001];

	scanf("%d",&t);
	for(i=0;i<t;++i)
		scanf("%d",&a[i]);
		
	scanf("%d",&c);
	while(c--)
	{
		scanf("%d %d",&mi,&ma);
		prev=*max_element(a,a+mi-1);
		next=*max_element(a+ma,a+t);
		
		if(next>prev)
			printf("%d\n",next);
		else
			printf("%d\n",prev);
	}
	
	return 0;
}
