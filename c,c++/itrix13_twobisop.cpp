#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)

using namespace std;

int func(char a[10][10], int i, int j){
	int row = i;
	int col = j;
	while(row>=0 && col>=0){//diagonally left
		--row;--col;
		if(row<0 || col<0)
			break;

		if(a[row][col]=='B')
			return 0;
	}

	row = i;
	col = j;
	while(row>=0 && col<8){//diagonally right
		--row;++col;
		if(row<0 || col>7)
			break;
		
		if(a[row][col]=='B')
			return 0;
	}

	row = i;
	col = j;
	while(row<8 && col>=0){//diagonally left forward
		++row;--col;
		if(row>7 || col<0)
			break;
		
		if(a[row][col]=='B')
			return 0;
	}

	row = i;
	col = j;
	while(row<8 && col<8){//diagonally right forward
		++row;++col;
		if(row>7 || col>7)
			break;
		
		if(a[row][col]=='B')
			return 0;
	}

	return 1;//if no bishop found
}

int main(){
	int test,i,j,ans;
	char a[10][10];

	s(test);
	while(test--){
		int flag = 0;
		for(i=0;i<8;++i){
			scanf("%s",a[i]);
		}

		for(i=0;i<8;++i){
			for(j=0;j<8;++j){
				if(a[i][j]=='B'){
					flag = 1;
		//			printf("%d %d\n", i, j);
					ans = func(a, i, j);
					break;
				}
			}
			if(flag == 1)
				break;
		}

		if(ans == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}