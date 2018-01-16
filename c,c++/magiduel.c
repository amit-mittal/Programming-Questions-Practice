#include<stdio.h>

int main()
{
//	int two[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456};
	
	long long int num,count=0;
	
	scanf("%lld",&num);
	
	while(num!=1)
	{
		if(num&1==1)
		{
			num*=3;
			num++;
		}
		else
		{
			num/=2;
		}
//		printf("%lld\n",num);
		count++;
	}
	
	printf("%lld\n",count);
	
	return 0;	
}	
