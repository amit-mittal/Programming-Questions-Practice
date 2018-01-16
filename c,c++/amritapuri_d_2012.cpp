#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int t,T,N,K,i,j,**a,*c,e,epos,count=0,*flag,exitflag=0;
scanf("%d",&T);
for(t=0;t<T;t++)
{	
	flag=0;
	exitflag=0;
	count=0;
	scanf("%d",&N);
	a=(int**)malloc(sizeof(int*)*N);
	for(i=0;i<N;i++)
	{
		a[i]=(int*)malloc(sizeof(int)*N);
	}
	c=(int*)malloc(sizeof(int)*N);
	flag=(int*)malloc(sizeof(int)*N);
	for(i=0;i<N;i++)
	{	
		c[i]=0;
		flag[i]=0;
		for(j=0;j<N;j++)
			a[i][j]=0;
	}
	for(i=0;i<N;i++)
	{
		scanf("%d",&e);
		for(j=0;j<e;j++)
		{
			scanf("%d",&epos);
			a[epos][i]=1;
			a[i][epos]=1;
		}
	}
	for(i=0;i<N;i++)
	{
		if(c[i]==0)
			c[i]=1;
		for(j=i;j<N;j++)
		{
			if(a[i][j]==1)
			{
				flag[i]=1;
				if(c[i]!=-c[j])//not compl
				{
					if(c[i]==0)
						c[i]=-c[j];	
					else if(c[j]==0)
						c[j]=-c[i];
					else if(c[i]==c[j])
						exitflag=1;	
				}
			}
			if(exitflag==1)
			break;
		}
		if(exitflag==1)
			break;
	}
	
	if(exitflag==1)
	{
		printf("0\n");
	}
	else
	{
	for(i=0;i<N;i++)
	{
		if(c[i]==0)
			count++;
	}
	for(i=0;i<N;i++)
	{
		if(flag[i]==0)
			count++;
	}
		
	printf("%d\n",(int)pow(2,count));
	}
}
return 0;
}

