#include<stdio.h>

int main()
{
	int test,n,ans,val,i;
	int a[]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216};
	
	scanf("%d",&test);
	
	while(test--){
		scanf("%d",&n);
		
		for(i=0;i<n;++i)
		{
			val=n-a[i];
			if(val<0)
				break;
		}
		ans=n-a[i-1];
		
		printf("%d\n",(2*ans)+1);
	}
	
	return 0;
}
