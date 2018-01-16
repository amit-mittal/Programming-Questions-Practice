#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
int t,f,xe,ye,xa,ya,a,c;
char de,da;
scanf("%d",&t);

f=0;
	scanf("%d",&xe);
	scanf("%d",&ye);
	cin>>de;
//cout<<de;
	scanf("%d",&a);
//cout<<a;
		while(a--)
		{
		scanf("%d",&xa);
		scanf("%d",&ya);
		scanf("%c",&da);

		if((de=='U')&&(da=='D'))
			{
			c=5;
			}
		else if((de=='U')&&(da=='L'))
			{c=2;
			}
		else if((de=='U')&&(da=='R'))
			{c=4;
			}
		else if((de=='D')&&(da=='U'))
			{c=6;
			}
		else if((de=='D')&&(da=='L'))
			{c=1;
			}
		else if((de=='D')&&(da=='R'))
			{c=3;
			}
		else if((de=='L')&&(da=='D'))
			{c=4;
			}
		else if((de=='L')&&(da=='U'))
			{c=3;
			}
		else if((de=='L')&&(da=='R'))
			{c=7;
			}
		else if((de=='R')&&(da=='D'))
			{c=2;cout<<c;
			}
		else if((de=='R')&&(da=='U'))
			{c=1;
			}
		else if((de=='R')&&(da=='L'))
			{c=8;
			}
		
		switch(c)
			{
			case 1:{if(((xa-xe)==(ye-ya))&&(xa-xe>0)&&f==0){f=1;cout<<(float)(xa-xe)/2;}break;}
			case 2:{if(((xa-xe)==(ya-ye))&&(ya-ye>0)&&f==0){f=1;cout<<(float)(xa-xe)/2;}break;}
			case 3:{if(((ye-ya)==(xe-xa))&&(xe-xa>0)&&f==0){f=1;cout<<(float)(xe-xa)/2;};break;}
			case 4:{if(((ya-ye)==(xe-xa))&&(xe-xa>0)&&f==0){f=1;cout<<(float)(xe-xa)/2;}break;}
			case 5:{if(ya-ye>0&&f==0){f=1;cout<<(float)(ya-ye)/2;}break;}
			case 6:{if(ye-ya>0&&f==0){f=1;cout<<(float)(ye-ya)/2;}break;}
			case 7:{if(xe-xa>0&&f==0){f=1;cout<<(float)(xe-xa)/2;}break;}
			case 8:{if(xa-xe>0&&f==0){f=1;cout<<(float)(xa-xe)/2;}break;}

			}
		}
	if(f==0)
		cout<<"SAFE\n";

	

return 0;
}
