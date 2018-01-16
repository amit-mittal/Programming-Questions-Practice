#include <iostream>
#include <cstdio>

#define s(n) scanf("%d", &n)
#define sc(n) scanf("%c", &n)

using namespace std;

int func(char a[][6], char ch){
	//in col
	for(int i=0;i<4;++i){
		int flag = 1;
		for(int j=0;j<4;++j){
			if(a[i][j]!=ch && a[i][j]!='T'){
				flag = 0;
				break;
			}
		}
		if(flag==1)
			return 1;
	}

	//in row
	for(int i=0;i<4;++i){
		int flag = 1;
		for(int j=0;j<4;++j){
			if(a[j][i]!=ch && a[j][i]!='T'){
				flag = 0;
				break;
			}
		}
		if(flag==1)
			return 1;
	}

	//diagonal 1
	int f1=1;
	for(int i=0;i<4;++i){
		if(a[i][i]!=ch && a[i][i]!='T'){
			f1 = 0;
			break;
		}
	}
	if(f1==1)
		return 1;

	//diagonal 2
	int f2=1;
	for(int i=0;i<4;++i){
		if(a[i][3-i]!=ch && a[i][3-i]!='T'){
			f2=0;
			break;
		}
	}
	if(f2==1)
		return 1;

	return 0;
}

int func_check(char a[][6]){
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
			if(a[i][j]=='.')
				return 0;
		}
	}
	return 1;
}

int main(){
	int test, ans;
	char a[5][6];
	s(test);
	
	getchar();
	
	for(int t=1;t<=test;++t){
		for(int i=0;i<4;++i){
			scanf("%s",a[i]);
		}
		
		ans = func(a, 'X');
		if(ans==1){
			printf("Case #%d: X won\n", t);
			continue;
		}

		ans = func(a, 'O');
		if(ans==1){
			printf("Case #%d: O won\n", t);
			continue;
		}

		int check = func_check(a);
		if(check==0)
			printf("Case #%d: Game has not completed\n", t);
		else
			printf("Case #%d: Draw\n", t);
	}
	return 0;
}