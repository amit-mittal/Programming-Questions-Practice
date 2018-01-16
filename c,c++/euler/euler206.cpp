#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
int x;
unsigned long long int j,i,q,m;
double b,e,o;
int a[9];


for(i=100000000;;++i)
{x=0;
j=pow(i,2);
q=j;
m=i%10;
if((m==3)||(m==7))
{
	while(q>0)
	{
	a[x]=q%10;
	q=q/100;
	++x;
	}	

if(a[1]==8)
	{
	if((a[2]==7)&&(a[3]==6)&&(a[4]==5)&&(a[5]==4)&&(a[6]==3)&&(a[7]==2)&&(a[8]==1))
	{
	cout<<i<<" "<<j;;
	break;
	}
	}

}
}

/*
do
{
i=pow(10,16)*1+pow(10,15)*a[0]+pow(10,14)*2+pow(10,13)*a[1]+pow(10,12)*3+pow(10,11)*a[2]+pow(10,10)*4+pow(10,9)*a[3]+pow(10,8)*5+pow(10,7)*a[4]+pow(10,6)*6+pow(10,5)*a[5]+pow(10,4)*7+pow(10,3)*a[6]+pow(10,2)*8+pow(10,1)*a[7]+9;
//b=sqrt(i);
e=modf(sqrt(i),&o);

cout<<e<<endl;
if(e==0)
	{
	cout<<i;
	break;
	}
}while(next_permutation(a,a+10));
*/


return 0;
}
