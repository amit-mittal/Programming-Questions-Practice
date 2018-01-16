#include<iostream.h>

int main()
{
	int i,j,s,k=0,l,m;
	cin>>i;
	s=i*(i+1)/2;
	

for(j=1;j<s;++j)
	{
	if(s%j==0)
		{++k;}
	
	}

l=(int)s/2;
m=l+k;

cout<<m;

return 0;
}