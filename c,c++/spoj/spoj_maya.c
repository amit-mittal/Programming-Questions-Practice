#include<stdio.h>
#include<string.h>

int main()
{
//	char a[][15]={"S",".","..","...","....","-",". -",".. -","... -",".... -","- -",". - -",".. - -","... - -",".... - -","- - -",". - - -",".. - - -","... - - -",".... - - -"};
	char s[9][1024];
	int c[8]={1,20,360,7200,144000,2880000,57600000,1152000000};
	
	int n;
	
	scanf("%d",&n);
	
	while(n!=0)
	{
		getchar();
		int i,j,k,b[10]={0};
		long long int val,q;
	
		for(i=0;i<n;++i)
			gets(s[i]);
		
		k=0;i=0;
		val=0;
		while(n--)
		{
			q=0;
			for(j=0;j<strlen(s[i]);++j)
			{
				if(s[i][j]=='.')
					q+=1;
				else if(s[i][j]=='-')
					q+=5;
				else if(s[i][j]=='S'||s[i][j]=='s')
					q=0;
			}
			val+=q*c[n];
			++i;
		}
		
//		for(i=0;i<n;++i)
//			printf("%d\n",b[i]);
			
	/*	val=0;
		for(i=0;i<n;++i)
		{
			val+=b[i]*c[--n];
		}*/
		printf("%lld\n",val);
		
		scanf("%d",&n);

	}
	
	return 0;
}
