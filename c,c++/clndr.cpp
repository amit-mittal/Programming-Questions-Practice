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
			a[i]=r;//store integers
			++i;
			}
		
		if((s[z]!='-')&&(c==1))
			{
			s2[j]=s[z];//store month
			++j;			
			}
		}
	s2[j]='\0';
//	cout<<s2<<endl;
//we cant use string in switch so make 2 parallel arrays. onee sotring the months and other just woth the same location storing the days in it or an other statements which is useful to deal with it which can then be used in switch as it would be integer	
	}
	
return 0;
}
