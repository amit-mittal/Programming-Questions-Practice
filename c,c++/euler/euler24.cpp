#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
unsigned long int j=0;
int i;
int myints[]={0,1,2,3,4,5,6,7,8,9};
sort(myints,myints+10);//this is written so that myints[]get sorted

do
{
++j;
next_permutation(myints,myints+10);
}while(j<999999);

for(i=0;i<11;++i)
cout << myints[i]<<" ";

return 0;
}
