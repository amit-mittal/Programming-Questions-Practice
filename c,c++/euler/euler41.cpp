#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int prime(unsigned long int p)
{
unsigned long int i,j,f=0;
j=(unsigned long int)sqrt(p);
if(p>1)
{
for(i=2;i<=j;++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	return p;
else
	return 0;
}
else
	return 0;
}


int main()
{int f=0;
unsigned long long int n,s;
int a[]={1,2,3,4,5,6,7};

sort (a,a+7);


do
{
s=pow(10,6)*a[0]+pow(10,5)*a[1]+pow(10,4)*a[2]+pow(10,3)*a[3]+pow(10,2)*a[4]+pow(10,1)*a[5]+a[6];

n=prime(s);
//cout<<s<<endl;

if(n>0)
{cout<<n<<endl;}
}while(next_permutation(a,a+7));

//cout<<f;
return 0;//answr is 7652413
}
