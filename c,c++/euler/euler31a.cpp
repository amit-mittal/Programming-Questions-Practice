#include<iostream>

using namespace std;
//1 2$ coins
//2 1$ coins
//1 1$ coin and 2 0.50$
int main()
{
int i,s,f=0,j,k,l,m;

for(i=0;i<3;++i)//20p and sum is 50
{
	s=50-20*i;
	for(j=0;j<6;++j)
	{
		s=s-10*j;
	if(s==0)
		{++f;break;}
	else if(s>0)
		{
		for(k=0;k<11;++k)
			{s=s-5*k;
		if(s==0)
			{++f;break;}
		else if(s>0)
		{
			for(l=0;l<26;++l)
				{
				s=s-2*k;
				if(s==0)
					{++f;break;}
				else if(s>0)
					{
					for(m=0;m<51;++m)
						{
						s=s-m;
						if(s==0)
							{++f;break;}
						}
					}
				}
			
			}
		}	

	}}

}
cout<<f;

return 0;
}
