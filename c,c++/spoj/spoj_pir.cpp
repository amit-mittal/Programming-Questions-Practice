#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	int t,u,v,w,U,W,V;
	long double volume;
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d %d %d %d %d %d",&u,&v,&w,&W,&V,&U);
		
		volume=sqrt(4*u*u*v*v*w*w - u*u*pow((v*v+w*w-U*U),2) - v*v*pow((w*w+u*u-V*V),2) - w*w*pow((u*u+v*v-W*W),2) + (v*v+w*w-U*U)*(w*w+u*u-V*V)*(u*u+v*v-W*W))/12;
		
		printf("%Lf\n",volume); 
	}

	return 0;
}
