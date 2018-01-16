#include<iostream>

using namespace std;

int reverse(int n)
{
	int r,num=0;
	while(n>0)
	{
		r=n%10;
		num=num*10+r;
		n=n/10;
	}
	return num;

}

int main()
{
	int test,sum,num1,num2;

	cin>>test;
	while(test--)
	{
		cin>>num1>>num2;
		sum=reverse(num1)+reverse(num2);
		cout<<reverse(sum)<<endl;
	}

	return 0;
}
