#include<iostream>

using namespace std;



int main()
{
int i;
unsigned long int s=0;
unsigned long int l;

for(i=3;i<1003;i+=2)
{
l=i*i;
s=s+4*(l)-6*(i-1);
}



cout<<++s;
}
