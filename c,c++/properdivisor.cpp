#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int n;
int sum=1;

cin>>n;

int numOfDiv=1;
int loop=(int)sqrt(n);

for (int i=2;i<=loop;i++)
{
	if(n%i == 0)
	{
	numOfDiv += 2;
	sum+=i+(n/i);
	}

}

if(loop*loop==n)
{
numOfDiv--;
sum-=loop;
}

cout<<"\nnumber of proper div are :"<<numOfDiv<<"\n";
cout<<"sum of proper divisors:"<<sum;



return 0;
}
