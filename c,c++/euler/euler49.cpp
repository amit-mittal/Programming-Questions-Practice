#include<iostream>
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


int sod(int n)//function to find sum of digits
{
int r;
int s=0;
int q=n;

while(q>0)
{
r=q%10;
s=s+r;
q=q/10;
}

}


int main()
{
int i,j,k,l,r,s1,s2,s3,s4;
int a[1100][6];
int n,m,z;

l=0;
k=0;
for(i=1000;i<10000;++i)
{

j=prime(i);
if(j>0)
	{
	a[k][0]=j;
	r=j%10;
	j=j/10;
	a[k][1]=r;
	r=j%10;
	j=j/10;
	a[k][2]=r;
	r=j%10;
	j=j/10;
	a[k][3]=r;
	r=j%10;
	j=j/10;
	a[k][4]=r;
	r=a[k][1]+a[k][2]+a[k][3]+a[k][4];
	a[k][5]=r;
	
	

/*for(m=1;m<5;++m)//to sort the digits
{
for(n=m+1;n<5;++n)
	{
	if(a[k][n]<a[k][m])
		{
		z=a[k][m];
		a[k][n]=a[k][m];
		a[k][m]=z;
		}
	}

}*/

cout<<a[k][0]<<"\t"<<a[k][1]<<"\t"<<a[k][2]<<"\t"<<a[k][3]<<"\t"<<a[k][4]<<"\t"<<a[k][5]<<endl;
	
++k;
++l;	

	}

}


cout<<l;


return 0;
}
