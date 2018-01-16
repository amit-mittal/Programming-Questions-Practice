#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

bool check(char s[]){
	int n = strlen(s);
	int index = 0;
	char t[100005];
	t[index++] = s[0];
	for(int i=1;i<n;++i){
		if(s[i] == t[index-1])
			continue;
		t[index++] = s[i];
	}
	for(int i=0;i<index;++i){
		if(t[i] != t[index-i-1])
			return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	int test;
	cin >> test;
	while(test--){
		char s[100005];
		cin >> s;
		if(check(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}