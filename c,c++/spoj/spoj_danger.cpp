#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	char string[10];
	int num,i,j;
	long long int p,ans;
	
	scanf("%s",string);

	while(strcmp(string,"00e0")!=0)
	{
		num=10*(string[0]-'0')+(string[1]-'0');
		
//		printf("%d\n",num);
		
		for(i=0;i<(string[3]-'0');++i)
			num*=10;

//		printf("%d\n",num);

		p=1;
		while(p<=num)
		{
			p*=2;
		}
		p/=2;
		
		ans=2*(num-p)+1;
		
		printf("%lld\n",ans);
		
		scanf("%s",string);
	}

	return 0;
}
