#include<stdio.h>
#include<math.h>
#include<algorithm>
//one more algorithm is to plot all points in a 2-d matrix and then find distanes b/w consecutive columns
using namespace std;

void sort(int a[],int b[],int n)
{
	int i,j;
	
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[j]<a[i])
			{
				swap(b[j],b[i]);
				swap(a[j],a[i]);
			}
			else if((a[j]==a[i])&&(b[j]>b[i]))
			{
				swap(b[j],b[i]);
				swap(a[j],a[i]);
			}
		}
	}
}

int main()
{
	int test,a[100000],b[100000],n,i,j,x,y;
	
	scanf("%d\n",&test);
	
	while(test--)
	{
		float sum=0;
		scanf("%d",&n);
		for(i=0;i<n;++i)
		{
			scanf("%d %d\n",&a[i],&b[i]);
		}
		sort(a,b,n);
		
//		for(i=0;i<n;++i)
//			printf("%d %d\n",a[i],b[i]);

		for(i=0;i<n-1;++i)
		{
			x=a[i]-a[i+1];
			y=b[i]-b[i+1];
			sum+=sqrt((x*x)+(y*y));
		}
		printf("%.2f\n",sum);
	}
	
	return 0;
}

/*
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<cctype>
#include<algorithm>
using namespace std;
int main()
{
int i,t,n,b,x1,a,y1,s,l,in[100009];
scanf("%d",&t);
while(t)
{
int arr1[10009]={0},arr2[10009][2];
t--;
scanf("\n%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d",&in[i],&b);
a=in[i];
arr1[a]=arr1[a]+1;
if(arr1[a]==1)
{
arr2[a][0]=b;
arr2[a][1]=b;
}
else
{
if(arr2[a][1]<b)
{
arr2[a][1]=b;
}
else if(arr2[a][0]>b)
{
arr2[a][0]=b;
}
}
}
double sum=0;
//int flag=0;
sort(in,in+n);
for(i=0;i<n;i++)
{
a=in[i];
sum=sum+arr2[a][1]-arr2[a][0];
if(i>0)
{
l=(a-x1)*(a-x1);
s=(arr2[a][1]-y1)*(arr2[a][1]-y1);
sum=sum+pow((l+s),0.5);
}
x1=in[i];
y1=arr2[a][0];
while((i<n-1) && in[i]==in[i+1])
{
i++;
}
}
printf("%.2f\n",sum);
}
return 0;
}
*/
