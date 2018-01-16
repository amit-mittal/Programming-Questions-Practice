#include<iostream>
using namespace std;

int main()
{
unsigned long long int length,breadth,l,b,s=0;


for(length=1;length<2000;++length)
{
for(breadth=1;breadth<2000;++breadth)
	{s=0;
	for(l=1;l<=length;++l)
		{
		for(b=1;b<=breadth;++b)
			{
			s=s+(length-l+1)*(breadth-b+1);
			}

		}
	if((s>1999990)&&(s<2000010))
		cout<<length<<" "<<breadth<<" "<<s<<endl;	
	}

}
cout<<s;

return 0;
}
