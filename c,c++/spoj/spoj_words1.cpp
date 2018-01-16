#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
//this program gives WA but, concept is right
using namespace std;

#define s(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)

void dfs(int s, int v[], int a[][26]){
	v[s] = 1;
	for(int i=0;i<26;++i){
		if(v[i]==0 && a[s][i]>0){
			dfs(i, v, a);
		}
	}
}

int main()
{
	int test, n;
	char str[100005];

	s(test);
	while(test--){
		int v[26] = {0};
		int count = 0, count1=0, count2=0, count3=0;
		int a[26][26] = {0};
		s(n);
		for(int i=0;i<n;++i){
			ss(str);
			int len = strlen(str);
			
			a[str[0]-'a'][str[len-1]-'a']++;
		}

		int s = 0, e = 0;
		for(int i=0;i<26;++i){
			int c1 = 0;
			for(int j=0;j<26;++j)
				c1+=a[j][i];
			int c2 = 0;
			for(int j=0;j<26;++j)
				c2+=a[i][j];

			if(c1-c2==0)
				++count;
			else if(c1-c2==1){
				++count1;
				e = i;
			} else if(c2-c1==1){
				++count2;
				s = i;
			} else
				++count3;
		}

		bool ans = true;
		dfs(0, v, a);
		for(int i=0;i<26;++i){
			if(v[i]==0)//check also if that letter is actually a vertex or not
				ans = false;
		}

		if(ans){
			if((count==26) || ((count==24) && (count1==1 && count2==1)))
				printf("Ordering is possible.\n");
			else
				printf("The door cannot be opened.\n");
		} else {
			printf("The door cannot be opened.\n");
		}
}
	
	return 0;
}
