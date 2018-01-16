#include<stdio.h>
#include<string.h>

int main()
{
	int test,m,k,i,j,f,sum;
	
	scanf("%d",&test);
	
	while(test--)
	{
		getchar();
		char string[1000003];
		f=0;
		gets(string);
		scanf("%d %d",&m,&k);
		
//		printf("%s\n",string);
		
		for(i=0;i<strlen(string)-1;++i)
		{
			sum=0;
			if(string[i]>95)
					sum+=string[i]-96;
				else if(string[i]<80&&string[i]>40)
					sum+=string[i]-14;
				else if(string[i]==32)
					sum+=32;
//			printf("%d\n",sum);
			
			for(j=i+1;j<strlen(string);++j)
			{
				if(string[j]>95)
					sum+=string[j]-96;
				else if(string[j]<95&&string[j]>40)
					sum+=string[j]-14;
				else if(string[j]==32)
					sum+=32;
					
//				printf("string is: %c %d\n",string[j],sum);
			}
			
//			printf("%d\n",sum);
			
			for(j=strlen(string)-1;j>i;--j)
			{
				if(string[j]>95)
					sum-=(string[j]-96);
				else if(string[j]<80&&string[j]>40)
					sum-=(string[j]-14);
				else if(string[j]==32)
					sum-=32;
					
//				printf("%d\n",sum);
					
//				if(sum>m)
//					sum%=m;
					
	//			printf("%d\n",sum);
					
				if(sum%m==k){f=1;
					printf("%d %d\n",i,j);break;}
			}
			if(f==1)
				break;
		}
		if(f==0)
			printf("-1\n");
	}
	
	return 0;
}
