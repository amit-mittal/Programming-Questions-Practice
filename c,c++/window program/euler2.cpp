#include<iostream.h>


int main()
{
long int i,l,n,s;

l=1;
n=2;
s=0;
i=3;
cout<<l<<endl<<n<<endl;
while(n<4000000)
	{
	s=l+n;
	i=i+s;
	cout<<i<<endl;
	l=n;
	n=s;
	cout<<s<<endl;
	
	}
cout<<i;

return 0;
}