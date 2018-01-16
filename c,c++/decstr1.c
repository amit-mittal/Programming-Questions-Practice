#include<stdio.h>
int main()
{
int t,k,p,i;
scanf("%d",&t);
while(t--){
scanf("%d",&k);
p=k%25;
if(p!=0)
for(i=0;i<=p;i++)
printf("%c",97+p-i);
k=k/25;
while(k--)
for(i=25;i>=0;i--)
printf("%c",97+i);
printf("\n");
}
return(0);
}
