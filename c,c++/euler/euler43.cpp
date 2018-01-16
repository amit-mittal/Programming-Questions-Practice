#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{int f=0,i,l;
unsigned long long int n,s,t=0;
int a[]={0,1,2,3,4,5,6,7,8,9};
int b[]={2,3,5,7,11,13,17};

sort (a,a+10);


do
{
f=0;
s=pow(10,9)*a[0]+pow(10,8)*a[1]+pow(10,7)*a[2]+pow(10,6)*a[3]+pow(10,5)*a[4]+pow(10,4)*a[5]+pow(10,3)*a[6]+pow(10,2)*a[7]+pow(10,1)*a[8]+a[9];

for(i=1;i<8;++i)
	{
	n=100*a[i]+10*a[i+1]+a[i+2];
	l=n%b[i-1];
	if(l==0)
		{
		++f;
		}
	}
if(f==7)
	t=t+s;

}while(next_permutation(a,a+10));

cout<<t;//16695334890

return 0;
}
