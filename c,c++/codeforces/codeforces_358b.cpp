#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int n;
	char a[100005];char b[100005], c[100005];

	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%s", c);
		int ll = strlen(c);
		c[ll] = '*';
		c[ll+1] = '\0';
		strcat(a, c);
	}

	scanf("%s", b);

	int la = strlen(a);
	int l = 0;
	int len = strlen(b);
	bool ans = true;
	for(int i=0;i<len;++i){
		if(a[l]=='*'){
			if(i+1>=len || !(b[i]=='<' && b[i+1]=='3'))
				ans = false;
			i++;
			++l;
		}
		else if(b[i]==a[l]){
			++l;
		}

		if(l==la)
			break;
	}

	if(l==la && ans)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}
