#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{


unsigned long long int t,n,i,l,s,j;

cin>>t;//no. of test cases

for(i=0;i<t;++i)
	{
	cin>>l;

	s=0;
	while(l>0)
		{		
		s=s+(unsigned long long int)(l/5);
		l=l/5;		
		}
	cout<<s<<"\n";	
	}



return 0;
}
//scanf,printf are faster than cin and cout
//never use gets instead use scanf("%s",str); no &
