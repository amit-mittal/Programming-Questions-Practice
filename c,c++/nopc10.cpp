#include<stdio.h>
#include<iostream>
#include<algorithm>

//1 jan 1900-monday

using namespace std;

int main()
{
	int a[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int d,m,y,leap,days=0,i,ans;

	scanf("%d %d %d",&d,&m,&y);
	
	if(d<32&&m<13)
	{
	if((y-1)%4!=0)
		leap=(y-1901)/4;
	else
	{
		leap=(y-1901)/4;
		leap--;
	}
	
	days+=((y-1900)*365);
	days+=leap;
	
	
	for(i=0;i<m;++i)
	{
		days+=a[i];
	}
	
	if(y%4==0&&m>2)
	{
		if(y%100==0&&y%400==0)
			days+=1;
		else if(y%100!=0)
			days+=1;
	}
	
	days+=(d-1);

	ans=days%7;
	
	switch(ans)
	{
		case(0):printf("Monday\n");
				break;
		case(1):printf("Tuesday\n");
				break;
		case(2):printf("Wednesday\n");
				break;
		case(3):printf("Thursday\n");
				break;
		case(4):printf("Friday\n");
				break;
		case(5):printf("Saturday\n");
				break;
		case(6):printf("Sunday\n");
				break;
	}
	}
	return 0;
}
