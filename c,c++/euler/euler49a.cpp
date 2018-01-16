#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int prime(int p)//to check if no. is prime
{
int f=0;
int l=(int)sqrt(p);

for(int i=2;i<l;++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	return p;
else
	return 0;

}

int main()
{

int s,n,b[4],f,t,n1,c[100],u,i,g=0,j,v,a[4],w,q,m;


u=0;

for(w=1487;w<3000;++w)
{m=3;
f=0;u=0;
q=w;
	while(q>0)
	{
		a[m]=q%10;
		q=q/10;
		--m;		
	}

s=1000*a[0]+100*a[1]+10*a[2]+a[3];
n=prime(s);

if(n>0)
	{
	b[0]=a[0];
	b[1]=a[1];
	b[2]=a[2];
	b[3]=a[3];

	do
		{
		t=1000*b[0]+100*b[1]+10*b[2]+b[3];
		n1=prime(t);
		if(n1>0)
			{
			c[u]=t;
//			cout<<s<<endl;
			++f;
			++u;
			}
		for(i=0;i<=u;++i)
			{
			for(j=i+1;j<=u;++j)			
				{
				for(v=j+1;v<=u;++v)
					{
					if((c[j]-c[i]==3330)&&(c[v]-c[j]==3330))
				{cout<<c[i]<<" "<<c[j]<<" "<<c[v]<<endl;}
					}
				}
			}
		

		}while(next_permutation(b,b+4));
	
	}


}


return 0;
}
