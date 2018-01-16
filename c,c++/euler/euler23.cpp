#include<iostream>
#include<ctime>

using namespace std;

int factors(int n)
{
int i,s=0;

for(i=1;i<n;++i)
	{
	if(n%i==0)
		s=s+i;
	}
return s;
}


int main()
{
time_t start,end;

int i,n,f=0,a[6965];
unsigned long int s=0;
int j=0,k,z;

time(&start);

for(i=1;i<20163;++i)
{
n=factors(i);
if(n>i)
	{
	a[j]=i;
//	++f;
//	cout<<i<<endl;
	++j;
	}
}
//cout<<"f="<<f;


for(i=1;i<20163;++i)
{f=0;
	for(j=0;j<6965;++j)
	{
	if(a[j]<i)
		{
		for(k=0;k<6965;++k)
		{
		if(a[k]<i)
		{
		z=a[j]+a[k];
		if(z==i)
			{
			++f;
			break;
			}
		}
		else
			break;		
		}
		if(f>0)
		{break;}
		}
	else
		break;
	}
if(f==0)
{//cout<<i<<endl;
	s=s+i;
}
}

time(&end);
double diff;
diff=difftime(end,start);
cout<<s<<endl;
cout<<diff;
return 0;
}
