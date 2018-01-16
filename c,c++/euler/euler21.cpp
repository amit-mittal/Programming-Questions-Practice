#include<iostream>

using namespace std;

int factors(int n)
{
int i,s=0;

for(i=1;i<n;++i)
	{
	if(n%i==0)
		s=s+i;
	}
return s;
}

int main()
{
int i,s,z;
int l=0;

for(i=1;i<10001;++i)
{
s=factors(i);
z=factors(s);
if((z==i)&&(s!=i))
{
l=l+i;
//cout<<i<<endl;
}
}
cout<<l;

return 0;
}
