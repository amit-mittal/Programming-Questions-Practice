#include<iostream.h>
#define int size 5;

int main()
{
int i,j=0,a[size],b[size];

for(i=0;i<size;++i)
	cin>>a[i];

for(i=0;i<size;++i)
	cin>b[i];

/*for(i=0;i<size;++i)
{
if(a[i]==b[i])
{--j;}
else
{++j;
break;}
}

if(j>0)
cout<<"not same";
else
cout<<"same";
*/
return 0;
}