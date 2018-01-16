#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;
//this program gives all the integers separated by spaces in a string


int main()
{
int i,n;
char szInput [256];
char *p;
unsigned long a[100];

fgets (szInput,256,stdin);
p=&szInput[0];

cout<<"no. of inputs-";
cin>>n;

a[0]= strtoul (szInput,&p,0);
cout<<a[0]<<endl;
i=1;

while(i<n)
	{
	a[i]= strtoul (p,&p,0);
	cout<<a[i]<<endl;
	++i;
	}


return 0;
}
