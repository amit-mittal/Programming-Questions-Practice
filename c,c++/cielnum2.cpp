#include<iostream>
#include<cstdio>
#include<algorithm>
#include<numeric>
#include<cstring>
#include<stdlib.h>

using namespace std;

int main()
{
	int t,count=0,i,j,num;
	char ch,string[200];

	scanf("%d",&t);

//	getchar();

	while(gets(string))
	{
		int a[11]={0};
		
//		num=atoi(string);
		
/*		scanf("%c",&ch);
		printf("%c",ch);
		if(ch!=10)
		{
			while(ch!=10)
			{
				if(ch>=48&&ch<=57)
					++a[ch-'0'];
				scanf("%c",&ch);
				printf("%c",ch);
			}	
		}
		else
		{
			while(ch==10)
				scanf("%c",&ch);
		}
*/		
//		gets(string);

		for(i=strlen(string)-1;string[i]!=32;--i)
		{
			if(i<0)
				break;
			if(string[i]>=48&&string[i]<=57)
				++a[string[i]-'0'];
		}
		
//		printf("%d\n",i);
		
/*		for(i=0;i<10;++i)
			printf("%d ",a[i]);
		printf("\n");			
*/

	/*	while(num>0)
		{
			i=num%10;
			++a[i];
			num/=10;
		}

		for(i=0;i<10;++i)
			printf("%d ",a[i]);
		printf("\n");
*/
			if(a[8]>=a[5]&&a[5]>=a[3]&&a[0]==0&&a[1]==0&&a[2]==0&&a[4]==0&&a[6]==0&&a[7]==0&&a[9]==0&&a[8]>0)
			{
				++count;
			}
	}
	
	printf("%d\n",count);

	return 0;
}
