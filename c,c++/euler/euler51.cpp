#include<iostream>
#include<math.h>

using namespace std;

int main()
{
unsigned long long int o=0,z,l,b[10000],c[10000][10],q,p,i,j,k,s,f,f1,f2,d;


for(p=56000;p<57000;++p)//generates all primes and stores in b[]
{
unsigned long int i,j,f=0;
j=(unsigned long int)sqrt(p);

for(i=2;i<=j;++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	{
	b[o]=p;
	++o;
	}
}//till this to generate primes

//for(i=0;i<o;++i)
//	cout<<b[i]<<endl;

for(l=0;l<o;++l)
{
q=b[l];z=0;
	while(q>0)
	{
	c[l][z]=q%10;
	q=q/10;
	++z;
	}
}

/*for(i=0;i<o;++i)
{cout<<b[i]<<" ";
	for(j=0;j<10;++j)
	{
	cout<<c[i][j]<<" ";
	}
	cout<<endl;
}*/

for(i=0;i<o;++i)
{z=0;s=0;
	for(j=0;j<o;++j)
	{f=0;f1=0;f2=0;
		for(k=0;k<5;++k)
		{
			for(l=0;l<5;++l)
			{
				if(c[i][k]==c[j][l])
				{
				++f;
				}
			}
			
			for(d=k+1;d<5;++d)
			{
				if(c[i][k]==c[i][d])
				{
				++f1;
				}
			}
			
			for(d=k+1;d<5;++d)
			{
				if(c[i][k]==c[i][d])
				{
				++f2;
				}
			}
	//	cout<<f<<endl;

		}

	if((f==4)&&(f1==2)&&(f2==2))
		{
		++s;
		cout<<b[i]<<" "<<b[j]<<endl;
		}
	}
//if(s==7)
//	cout<<b[i];

}





return 0;
}
