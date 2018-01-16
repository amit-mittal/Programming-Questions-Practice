#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>

using namespace std;

#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define pll(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

int main() {
	int test;
	s(test);getchar();
	while(test--){
		char map[30];
		char text[150005];
		char newtext[150005];
		
		scanf("%[^\n]", map);getchar();
		scanf("%[^\n]", text);getchar();
		strcpy(newtext, text);
		
		int len = strlen(text);
		int count[30]={0};
		int occur[30];
		for(int i=0;i<28;++i)
			occur[i] = -1;
		for(int i=0;i<26;++i)
			map[i] = tolower(map[i]);
			
		vector< pair<int, int> > v;
		for(int i=0;i<len;++i){
			text[i] = tolower(text[i]);
			if(text[i]<'a' || text[i]>'z')
				continue;
			++count[text[i]-'a'];
			if(occur[text[i]-'a']==-1)
				occur[text[i]-'a']=i;
		}
		for(int i=0;i<26;++i)
			v.push_back(make_pair(count[i], occur[i]));
		sort(v.begin(), v.end());
		for(int i=25;i>=0;--i){
			if(v[i].first>0){
				char ch = text[v[i].second];
				char replace = map[i];
				for(int j=0;j<len;++j){
					if(text[j]==ch){
						if(newtext[j]<='z' && newtext[j]>='a')
							newtext[j] = replace;
						else
							newtext[j] = replace-'a'+'A';
					}
				}
			}
		}
		ps(newtext), nline;
	}
	return 0;
}
