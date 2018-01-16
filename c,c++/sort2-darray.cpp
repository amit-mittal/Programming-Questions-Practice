#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>

using namespace std;

int main()
{
int i,j;

char a[][16]={"MARY","PATRICIA","LINDA","BARBARA","ELIZABETH","JENNIFER"};

for(i=0;i<7;++i)
{
for(j=i+1;j<7;++j)
	{
	if(strcmp(a[i],a[j])>0)
		{
		swap(a[i],a[j]);
		}
	}

}

for(i=0;i<7;++i)
	cout<<a[i]<<endl;

return 0;
}
