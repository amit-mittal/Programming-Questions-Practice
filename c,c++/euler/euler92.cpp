#include<iostream>
#include<math.h>

using namespace std;

int main()
{
unsigned long int i,q,s=0,r,f=0;

for(i=1;i<10000000;++i)
{
s=i;
	while(1)
	{
	q=s;
	s=0;
		while(q>0)
		{
		r=q%10;
		s=s+pow(r,2);
		q=q/10;
		}
//	cout<<i<<endl;
	if(s==89)
		{
		++f;
//		cout<<i<<endl;
		break;
		}
	if(s==1)
		break;
	}


}

cout<<f+1;

return 0;
}
