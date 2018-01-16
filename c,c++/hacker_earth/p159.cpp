#include <stdio.h>

#define siz 105

int c=0, n;
int a[siz][siz], b[siz][siz];

void A(int x, int y)
{
a[x][y]=1;
if((x==n-1)&&(y==n-1)){c++;}
if((x-1)>=0&&!a[x-1][y]&&b[x-1][y]!=1){A(x-1,y);}
if((x+1)<n&&!a[x+1][y]&&b[x+1][y]!=1){A(x+1,y);}
if((y-1)>=0&&!a[x][y-1]&&b[x][y-1]!=1){A(x,y-1);}
if((y+1)<n&&!a[x][y+1]&&b[x][y+1]!=1){A(x,y+1);}
a[x][y]=0;
}

main()
{
int i, j;
scanf("%d",&n);
for(i=0; i<n; i++)
	for(j=0; j<n; j++)
		scanf("%d",&b[i][j]);
a[0][0]=1;
A(0,0);
printf("%d\n",c);
return 0;
}