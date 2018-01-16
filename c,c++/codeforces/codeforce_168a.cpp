#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cctype>
#include<numeric>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
	long long int n,x,y,req,val;

	cin>>n>>x>>y;
	
	req=ceil((long double)(y*n)/100);
	
	val=req-x;
	
	if(val>=0)
		cout<<val<<endl;
	else
		printf("0\n");
		
	return 0;
}
