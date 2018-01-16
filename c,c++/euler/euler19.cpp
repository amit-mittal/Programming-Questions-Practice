#include<iostream>

using namespace std;

int main()
{
int year,month,extra=0,f=0;

for(year=1901;year<2001;++year)//1st jan1901=tuesday
{
	if(year%4!=0)
	{
	month=1;//make for leap years diff loop
	while(month!=13)//for non leap years
		{
		if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
			{
			extra+=3;
			}
		else if(month==2)
			{
			extra+=0;
			}
		else
			{
			extra+=2;
			}
		extra=extra%7;
		if(extra==5)
			++f;
		++month;
		}
	}
		
	else
	{
	month=1;//make for leap years diff loop
	while(month!=13)//for non leap years
		{
		if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
			{
			extra+=3;
			}
		else if(month==2)
			{
			extra+=1;
			}
		else
			{
			extra+=2;
			}
		extra=extra%7;
		if(extra==5)
			++f;
		++month;
		}
	}
}
cout<<f;

return 0;
}
