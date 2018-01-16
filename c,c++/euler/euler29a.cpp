#include<iostream>
#include<math.h>

using namespace std;

int main()
{
unsigned long long int a,b,s[10000],i=0,k,j,l,f=0;

for(a=2;a<101;++a)
{
	for(b=2;b<101;++b)
	{
	s[i]=pow(a,b);
	cout<<s[i]<<endl;
	++i;
	}

}

cout<<i<<endl;



for(k=0;k<i;++k)//sorting
{
for(j=k+1;j<i;++j)
	{
	if(s[j]<s[k])
		{
		l=s[j];
		s[j]=s[k];
		s[k]=l;
		}
	}

}


for(k=0;k<i;++k)
{
	if((s[k]!=s[k+1])||(s[k]==0))
		++f;
}

cout<<f;

return 0;//as array is not able to store the values so we can store the values of b*log(a) in place of a^b
}
