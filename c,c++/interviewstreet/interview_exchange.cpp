#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

void func(int b[][102],int start,int n,int visit[]){
	int i,count=0,j;

	visit[start]=1;

	for(i=1;i<=n;++i){
		for(j=1;j<=n;++j){
			if(visit[i]==1 && visit[j]==1){
				b[i][j]=1;
				b[j][i]=1;
			}
		}
	}

	for(i=1;i<=n;++i){
		if(visit[i]==0){
			++count;
			break;
		}
	}

	if(count==0)
		return;

	for(i=1;i<=n;++i){
		if(b[start][i]==1 && visit[i]==0){
			func(b,i,n,visit);
		}
	}
}

int main(){
	int n,i,j,a[102],c[102],b[102][102],num,pos;
	char ch;

	scanf("%d",&n);

	for(i=1;i<=n;++i){
		scanf("%d",&num);
		a[num]=i;
		c[i]=num;
	}

	getchar();
	for(i=1;i<=n;++i){
		for(j=1;j<=n;++j){
			scanf("%c",&ch);
			
			if(ch=='Y')
				b[i][j]=1;
			else if(ch=='N')
				b[i][j]=0;
		}
		getchar();
	}

/*	for(i=1;i<=n;++i)
		for(j=1;j<=n;++j){
			printf("%d",b[i][j]);
		}
*/
	for(i=1;i<=n;++i){
		int visit[102]={0};
		func(b,i,n,visit);
	}

	for(i=1;i<=n;++i){
		pos=a[i];
		for(j=1;j<pos;++j){
			if(b[pos][j]==1 && c[j]>c[pos]){
				swap(c[pos],c[j]);
				swap(a[i],a[c[pos]]);
				break;
			}
		}
	}
	

/*
	for(i=1;i<=n;++i){
		printf("%d %d\n",a[i],c[i]);
	}
*/

/*	for(i=1;i<=n;++i){
		for(j=1;j<=n;++j){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
*/
	for(i=1;i<=n;++i)
		printf("%d ", c[i]);
	printf("\n");

	return 0;
}