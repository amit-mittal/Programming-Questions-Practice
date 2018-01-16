#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
unsigned long long int n;
unsigned long long int f=0,oldnum=0,k;

scanf("%lld",&k);//input k upto which you want to go
for(n=2;n<k;++n)
{
int num=1;
unsigned long long int loop=(unsigned long long int)sqrt(n);

	for (unsigned long long int i=2;i<=loop;i++)
	{
		if(n%i == 0)
		{
			num += 2;
		}

	}

	if(loop*loop==n)
		{
			num--;
		}
		num++;
//cout<<n<<" "<<num<<endl;		
	if(oldnum==num)
		{
		//	cout<<n<<" "<<num<<endl;
		++f;
		}
	oldnum=num;
}
printf("%lld",f);

return 0;
}
