#include<iostream>

using namespace std;

int main()
{
int i,r,q,k=0;
unsigned long int f=0;

for(i=1;i<10;++i)
{
	r=i%10;
	if((r==1)||(r==2)||(r==6))
		f+=3;
	else if((r==5)||(r==4)||(r==9))
		f+=4;
	else if((r==3)||(r==7)||(r==8))
		f+=5;
	
}
cout<<f<<endl;
for(i=20;i<100;++i)
{q=i;
	r=q%10;
	if((r==1)||(r==2)||(r==6))
		f+=3;
	else if((r==5)||(r==4)||(r==9))
		f+=4;
	else if((r==3)||(r==7)||(r==8))
		f+=5;
	else if(r==0)
		f+=0;
	q=q/10;
	r=q%10;
	if(r==7)
		f+=7;
	else if((r==2)||(r==3)||(r==8)||(r==9))
		f+=6;
	else if((r==4)||(r==5)||(r==6))
		f+=5;
	
}

f+=70;

for(i=100;i<1000;++i)
{
	q=i;
	r=q%10;
	k=k+r;
	if((r==1)||(r==2)||(r==6))
		f+=3;
	else if((r==5)||(r==4)||(r==9))
		f+=4;
	else if((r==3)||(r==7)||(r==8))
		f+=5;
	else if (r==0)
		f+=0;
	q=q/10;
	r=q%10;
	k=k+r;
	if(r==7)
		f+=7;
	else if((r==2)||(r==3)||(r==8)||(r==9))
		f+=6;
	else if((r==4)||(r==5)||(r==6))
		f+=5;
	else if(r==0)
		f+=0;
if(k!=0)
	f+=10;//and,hundred
	q=q/10;
	r=q%10;
	if((r==1)||(r==2)||(r==6))
		f+=3;
	else if((r==5)||(r==4)||(r==9))
		f+=4;
	else if((r==3)||(r==7)||(r==8))
		f+=5;	
	
}
f+=306;

f+=11;

cout<<f;

return 0;
}
