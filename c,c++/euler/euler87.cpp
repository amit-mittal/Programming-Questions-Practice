#include<iostream>
#include<math.h>
using namespace std;

int main()
{

unsigned long long int p,i,j,f=0,k=1,a[10000],i1=0,i2=0,i3=0,s,f1=0,y;

a[0]=2;

for(p=3;p<7500;p+=2)
{
j=(unsigned long int)sqrt(p);
f=0;
for(i=3;i<=j;++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	{
	a[k]=p;
//	cout<<a[k]<<endl;
	++k;
	}
}
cout<<endl;

for(i=27;i<50000000;++i)
{i1=0;y=0;
	while(a[i1]<(int)sqrt(i))
	{i2=0;y=0;//cout<<i<<endl;
	//cout<<(int)sqrt(i)<<endl;
		while(i2<k)
		{y=0;
		i3=0;
			while(i3<k)
			{y=0;
			s=pow(a[i1],2)+pow(a[i2],3)+pow(a[i3],4);
			
			if(s==i)
				{
				++f1;
				cout<<i<<endl;
				}
			else if(s>i)
				{
				++y;
				break;
				}

			++i3;
			}
//			if(y==1)
//			break;
		++i2;
		}
//		if(y==1)
//		break;
	++i1;
	}

}

cout<<f1;

return 0;
}


