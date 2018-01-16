#include<stdio.h>
#include<stdlib.h>

int main()
{
	int test,n,ans,count,val,i,j,len;
	char *a;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %d",&len,&n);
		a=malloc((len+1)*sizeof(char));
		
		--n;
		
		if(len&1)
		{
			for(i=0;i<=len/2;++i)
			{
				a[len/2-i]=(n%10)+'0';
				a[len/2+i]=(n%10)+'0';
				n/=10;
			}
			if(a[0]=='0')
				a[0]=a[len-1]='1';
			else
				a[0]=a[len-1]=a[0]+1;
		}
		else
		{
			for(i=0;i<len/2;++i)
			{
				a[len/2-i-1]=(n%10)+'0';
				a[len/2+i]=(n%10)+'0';
				n/=10;
			}
			if(a[0]=='0')
				a[0]=a[len-1]='1';
			else
				a[0]=a[len-1]=a[0]+1;
		}
		a[len]='\0';
		printf("%s\n",a);
	}
	
	return 0;
}
