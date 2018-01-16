#include<stdio.h>

int main()
{
	int b[4]={0},test,i,count=1;
	scanf("%d",&test);
	
	while(test--)
	{
		char a[5];
		scanf("%s",a);
		if(a[2]=='2')
			++b[1];//(1/2)
		else if((a[0]=='1')&&(a[2]=='4'))
			++b[0];// 1/4
		else
			++b[2];// 3/4
	}
	
//	for(i=0;i<3;++i)
//		printf("%d\n",b[i]);

	if(b[2]>=b[0])
	{
		count+=b[2];
		b[0]=0;
		count+=(int)((b[1]+1)/2);
	}
	else
	{
		count+=b[2];
		b[0]=b[0]-b[2];
		count+=(int)(b[1]/2);
		if(b[1]%2==0)
		{
			count+=(int)(b[0]/4);
			if(b[0]%4!=0)
				++count;
		}
		else
		{
			count+=(int)(b[0]/4);
			if(b[0]%4<=2)
			{
				++count;
			}
			else
			{
				count+=2;
			}
		}

	}
	printf("%d\n",count);

	return 0;
}
