#include<stdio.h>
#include<math.h>
//#include<conio.h>
 
int main()
{
int n,m,i,j,sum,k,flag,t;
scanf("%d",&t);
while(t--)
{
flag=0;
scanf("%d %d",&n,&m);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
k=pow(2,n);
for(i=0;i<k;i++)//this considers all cases to add the numbers
{
sum=0;
for(j=0;j<n;j++)
{
if(i&(1<<j))
sum=sum+arr[j];
}
if(sum==m)
{
flag=1;
break;
}//till here all sums are considered
}
if(flag)
printf("Yes\n");
else
printf("No\n");
}
//getch();
return 0;
}
