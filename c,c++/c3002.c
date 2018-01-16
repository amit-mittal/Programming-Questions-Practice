#include<stdio.h>
#include<stdlib.h>

void sort(int a[])
{int temp,i,j;
	for(i=0;i<4;++i)
	{
		for(j=i+1;j<5;++j)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}

int main()
{
	char a[10],b[10],c[10],d[10],e[10];
	scanf("%s %s %s %s %s",a,b,c,d,e);
	int q[5],val,i;
	q[0]=atoi(a);
	q[1]=atoi(b);
	q[2]=atoi(c);
	q[3]=atoi(d);
	q[4]=atoi(e);
	
	max(q);
	
//	for(i=0;i<5;++i)
//		printf("%d ",q[i]);
	
	val=(int)(q[0]/q[1])*q[2]-q[3]+q[4];
	
	printf("%d",val);
	
	return 0;
}
