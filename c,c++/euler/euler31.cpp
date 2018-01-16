#include<iostream>

using namespace std;

int main()
{
int i,j,k,l,m,n,o,t;
unsigned long int f=0,s;

for(t=0;t<201;++t)
{
for(i=0;i<5;++i)
{
 	 for(j=0;j<11;++j)
	{for(k=0;k<21;++k)
	{for(l=0;j<41;++l)
	{for(m=0;m<101;++m)
	{
	s=50*i+20*j+10*k+5*l+2*m;
	if(s==t)
		{
		//cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<m<<" "<<n<<" "<<o<<" "<<endl;
		++f;		
		cout<<f<<endl;
		break;
		}	
	}
}}}
}}
//cout<<f;//no. of 1 $1 coins still left

return 0;
}
