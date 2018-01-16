#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{
int t=0,u,v=0;

char a[][16]={"MARY","PATRICIA","LINDA","BARBARA","ELIZABETH","JENNIFER"};

while(isupper(a[t][0])!=0)
{
u=t+1;
while(isupper(a[u][0])!=0)
	{
	if(strcmp(a[t],a[u])>0)
		{
		swap(a[t],a[u]);
		}
	++u;
	}
++t;
++v;
}

for(t=0;t<v;++t)
	cout<<a[t]<<endl;

return 0;
}
