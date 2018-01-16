#include<iostream>
#include<cmath>

using namespace std;

int main()
{
unsigned long long int s,a,b,c,l,f,n=0;

for(s=12;s<1500000;++s)
	{f=0;
	for(a=1;a<s/2;++a)
		{
		for(b=1;b<s/2;++b)
			{
			
			if(2*a*(a+b)==s)
				{
		//		cout<<s<<endl;	
				++f;
				}
			}
		}
	if(f==2)
		{
		++n;
		cout<<s<<endl;
		}
	}

cout<<n;

return 0;
}
