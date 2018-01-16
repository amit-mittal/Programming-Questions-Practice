#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
int t,d,j,c=0,i,a[2];
int r=0;
char s[15],s1,s2[5];

scanf("%d",&t);

while(t-->0)
	{
	scanf("%s",s);
	i=0;j=0;
	for(int z=0;z<8;z++)
		{
		if(s[z]=='-')
			++c;

		if((s[z]!='-')&&((c==0)||(c==2)))
			{
			r=atoi(&s[z]);z+=1;
			a[i]=r;
			cout<<a[i]<<endl;
			++i;
			}
		
		if((s[z]!='-')&&(c==1))
			{
			s2[j]=s[z];
	//		cout<<s2[j];
			++j;			
			}
		}
	s2[j]='\0';
	cout<<s2<<endl;
	
	}
	
return 0;
}//this program reads both integers and characters and stores it in different variables and those integers,char are separated by '-'
