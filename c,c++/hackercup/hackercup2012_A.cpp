#include <iostream>
#include <cstdio>
#include <cstring>

//H-1 A-1 C-2 K-1 E-1 R-1 U-1 P-1

using namespace std;

int main(){
	int j,test,i,min,len;
	char str[1024];
	
	scanf("%d",&test);
	getchar();
	for(j=1;j<=test;++j){
		int a[26]={0};

		scanf ( "%[^\n]", str );
		getchar();
		
		len=strlen(str);

		for(i=0;i<len;++i){
			if(str[i]>='A' && str[i]<='Z')
				++a[str[i]-'A'];
		}

/*		for(i=0;i<26;++i)
			printf("%c %d\n", i+'A', a[i]);
*/
		min = a['C'-'A']/2;
		if(a['A'-'A']<min)
			min=a['A'-'A'];

		if(a['H'-'A']<min)
			min=a['H'-'A'];

		if(a['K'-'A']<min)
			min=a['K'-'A'];

		if(a['E'-'A']<min)
			min=a['E'-'A'];

		if(a['R'-'A']<min)
			min=a['R'-'A'];

		if(a['U'-'A']<min)
			min=a['U'-'A'];

		if(a['P'-'A']<min)
			min=a['P'-'A'];

		printf("Case #%d: %d\n",j, min);
	}
	
	return 0;
}
