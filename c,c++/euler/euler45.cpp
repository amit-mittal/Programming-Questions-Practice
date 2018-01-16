#include<iostream>

using namespace std;

int main()
{
unsigned long long int t[100000],p[100000],h[100000],t1,p1,h1,i,j,k;

for(i=1;i<100000;++i)
	{
	t1=i*(i+1)/2;
	t[i-1]=t1;
	p1=i*(3*i-1)/2;
	p[i-1]=p1;
	h1=i*(2*i-1);
	h[i-1]=h1;
	}


for(i=140;i<100000;++i)
{
//cout<<t[i]<<" "<<p[i]<<" "<<h[i]<<endl;
	for(j=i;j<100000;++j)
	{
		if(h[i]==p[j])
		{
			for(k=j;k<100000;++k)
			{
			if(t[k]==p[j])
				cout<<t[k]<<endl;
			}
		}	

	}


}


return 0;//1533776805
}
