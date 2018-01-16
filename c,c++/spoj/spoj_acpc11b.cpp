#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	unsigned int t,a,b,i,j,val;
	unsigned int ar[1005],br[1005],v,min=1000005;

	scanf("%d",&t);
	
	while(t--)
	{
		min=1000005;

		scanf("%d",&a);
		for(i=0;i<a;++i)
			scanf("%d",&ar[i]);
		
		scanf("%d",&b);
		for(i=0;i<b;++i)
			scanf("%d",&br[i]);
		
		sort(ar, ar+a);
		sort(br, br+b);
		
		for(i=0, j=0; i<a && j<b ;){
			if(ar[i]>br[j]){
				val = ar[i]-br[j];
				if(val<min)
					min=val;
				++j;
			}
			else if(ar[i]<br[j]){
				val = br[j]-ar[i];
				if(val<min)
					min=val;
				++i;
			}
			else{
				min = 0;
				break;
			}
		}

		printf("%d\n",min);
	}
	
	return 0;
}
