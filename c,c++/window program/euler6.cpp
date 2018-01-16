#include<iostream.h>
#include<math.h>

int main()
{
long int i,j,k=0,s=0;
long int l;

for(i=1;i<101;++i)
	{
	s=s+pow(i,2);
	}


for(j=1;j<101;++j)
	{
	k=k+j;
	}
l=pow(k,2);
cout<<l;


return 0;
}