#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>

using namespace std;

int a[6101][6101];

int main()
{
	int test,len;
	char str[6101];

	scanf("%d",&test);
	
	while(test--){
		scanf("%s",str);	
		len=strlen(str);

		for(int i=0;i<len;++i){
			a[i][i] = 1;
		}

		for(int i=2;i<=len;++i){
			for(int j=0;j<len-i+1;++j){
				int k = j + i - 1;

				if(str[j]==str[k] && i==2)
					a[j][k] = 2;
				else if(str[j]==str[k])
					a[j][k] = a[j+1][k-1]+2;
				else
					a[j][k] = max(a[j+1][k], a[j][k-1]);
			}
		}
/*
		for(int i=0;i<len;++i){
			for(int j=0;j<len;++j){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
*/
		printf("%d\n", len - a[0][len-1]);
	}
	
	return 0;
}
