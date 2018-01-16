#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int x1,y1,x2,y2,r1,r2;
	double val,ans;
	
	scanf("%d%d%d",&x1,&y1,&r1);
	scanf("%d%d%d",&x2,&y2,&r2);
	
	val=(double)sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	ans=(double)((val-r1-r2)/2);
	
	printf("%.15lf\n",ans);
	
	return 0;
}
