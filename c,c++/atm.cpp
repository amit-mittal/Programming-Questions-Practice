#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
cout.precision(2);
cout.setf(ios::showpoint);
cout.setf(ios::fixed);
float x,y;
float o;
cin>>x>>y;


if(y-x>=0.5)
	{
	if((int)x%5==0)
		{
		o=y-x-0.5;
		}
	else
		{
		o=y;
		}
	}
else
	{
	o=y;
	}

cout<<o<<endl;

return 0;
}
