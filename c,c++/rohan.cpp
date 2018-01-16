#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
int r=0,k=0,n=0,tag=0,pr=0;
int t;
cout<<"no. of test cases-";
cin>>t;//no of test cases
char s1[10],s2[30];

for(int m=0;m<t;m++)
{   r=0;k=0;n=0;tag=0;pr=0;
	gets(s1);gets(s2);
	for(int z=0;s1[z]!='\0';z++)
	{
	if(s1[z]==' ')
		{tag++;}
	if(s1[z]!=' '&&tag==0)
	{
		
		r+=atoi(&s1[z]);
		
	}
	if(s1[z]!=' '&&tag==1)
	{
		
		k+=atoi(&s1[z]);
	}
	if(s1[z]!=' '&&tag==2)
	{
		
		n+=atoi(&s1[z]);
	}
}

int g[10];
int j=0;j=0;
for(int a=0;a<n;a++)
{g[a]=0;}
for(int i=0;s2[i]!='\0'&&j<n;i++)
{
	
	
		if(s2[i]==' ')
		{
				j++;
		}
		if(s2[i]!=' ')
		{
			
			g[j]+=atoi(&s2[i]);
		}

}

int f=0,y=0,l=n-1;
do
{
	while(y<k+1)
	{   f=f%n;
		y+=g[f];
	
		if(y>k)
		{y-=g[f];
		break;
		
		}
		if(l==f)
	{break;
	}
			f++;l++;
l=l%n;
	}
r--;
pr+=y;
y=0;
}while(r);

cout<<pr<<endl;
}
;return 0;
}
