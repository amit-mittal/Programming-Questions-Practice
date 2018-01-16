#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
 
int main()
{int i=0;
char szInput [256];
char *p,d;
  unsigned long a[100];
  printf ("Enter an unsigned number: ");
  fgets (szInput,256,stdin);
*p=szInput[0];
while(p!='\0')
	{
	a[i]= strtoul (szInput,&p,0);
	cout<<a[i];
	++i;
	a[i]= strtoul (p,&p,0);  
	cout<<a[i];
	++i;
	}
/*while(szInput[i]!='\0')
	{
	cout<<szInput;
	}
*/  return 0;
}
