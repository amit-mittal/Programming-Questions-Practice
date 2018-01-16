#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
char str[]={"monkeyhi"};
char s[]={"key"};
char l[60];
char *p;
p=strstr(str,s);
&*(p+strlen(s)-1);

return 0;
}

