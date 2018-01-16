#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main()
{
int i,n;
char szInput [256];
char *p,d;
unsigned long a[100];
fgets (szInput,256,stdin);
p=&szInput[0];
cout<<"no. of inputs";
cin>>n;
a[0]= strtoul (szInput,&p,0);
cout<<a[0];
i=1;
while(i<n)
	{
	a[i]= strtoul (p,&p,0);
	cout<<a[i];
	++i;
	}


return 0;
}
