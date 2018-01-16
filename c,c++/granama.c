#include <stdio.h>
#include <string.h>

int main(){
	int test,len1,len2,check1,check2,i;
	char s1[1005], s2[1005];

	scanf("%d",&test);

	while(test--){
		int a[28]={0}, b[28]={0};
		scanf("%s %s",s1,s2);

		check1=check2=1;

		len1=strlen(s1);
		len2=strlen(s2);

		for(i=0;i<len1;++i){
			++a[s1[i]-'a'];
		}

		for(i=0;i<len2;++i){
			++b[s2[i]-'a'];
		}

		for(i=0;i<26;++i){
			if(a[i]!=b[i]){
				check1=0;
			}

			if((a[i]>0 && b[i]==0) || (a[i]==0 && b[i]>0)){
				check2=0;
			}
		}

		if(check1==check2)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}