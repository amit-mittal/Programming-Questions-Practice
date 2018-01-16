#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>

using namespace std;

int main()
{
	int i,j,pl,count;
	string code[100],place[100];
	string num[100],rate[100];

	cin>>code[0]>>place[0];
	pl=0;
	
	while(1)
	{
		++pl;
		cin>>code[pl];
		
	//	if(code[pl].compare("000000")!=0)
		//	cin>>place[pl];
//		else
	//		break;
	}
	
	--pl;
	
	cin>>num[0]>>rate[0];
	count=0;
	
	while(1)
	{
		++count;
		cin>>num[count];
		
		//if(num[count].compare("#")!=0)
			//cin>>rate[count];
		//else
			//break;
			
		
	}
	
	return 0;
	
}
