#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	long long int n,k,i,j,a[100005],rem,b[3];
	double start,in;
	cin>>n>>k;
	
	for(i=0;i<n;++i)
		cin>>a[i];
		
	sort(a,a+n);
	
	start=(double)k/n;
	
	if(modf(start,&in)==0)
	{
		start--;
		rem=k-((int)start*n)-1;
	}
	else
		rem=k%n-1;

//	printf("\nstart=%d rem=%d\n",(int)start,rem);
	
	b[0]=a[(int)start];
	
	b[1]=a[rem];
	
	cout<<b[0]<<" "<<b[1]<<endl;
	
	return 0;
}
