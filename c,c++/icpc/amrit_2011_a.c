#include <stdio.h>

int ans = -10000000;
int r,c,a[501][501];

void func(int row, int col, int val, int present, int b[][501]){
	if(row>=r && col>=c)
		return;

	if(row==r-1 && col==c-1)
		if(present>ans)
			ans=present;

	val+=a[row][col];

	if(val<0 && val<present)
		present = val;

	if(val<=ans)
		return;

	if(row < r-1)
		func(row+1, col, val, present, b);

	if(col < c-1)
		func(row, col+1, val, present, b);
}

int main(){
	int test,i,j;

	scanf("%d",&test);

	while(test--){
		int b[501][501]={0};
		ans = -10000000;

		scanf("%d %d", &r, &c);

		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				scanf("%d",&a[i][j]);
			}
		}

		func(i,j,0,0,b);
		
		if(ans<0)
			printf("%d\n", -(ans-1));
		else
			printf("1\n");
	}

	return 0;
}