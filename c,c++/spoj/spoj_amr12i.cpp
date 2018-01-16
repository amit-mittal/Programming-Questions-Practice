#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test,n,k,a[20005],l,i,j,count,ans,poss;
	char str[20005];

	scanf("%d",&test);

	while(test--){
		scanf("%d %d",&n,&l);

		scanf("%s",str);

		poss=0;
		ans = 0;
		a[0]=1;
		k=0;
		count=1;
		
		for(i=1;i<n;++i){
			if(str[i]==str[i-1]){
				++count;
			}
			else{
				a[k]=count;
				count=1;
				++k;
			}
		}

		if(str[n-1]==str[n-2]){
			a[k]=count;
			++k;
		}
		else{
			a[k]=1;
			++k;
		}

		for(i=0;i<k;++i){
			if(a[i]<l)
				++ans;
			else if(a[i]==l){
				++ans;
				poss=1;
			}
			else{
				poss=1;
				ans+=(a[i]/l);

				if(a[i]%l>0)
					++ans;
			}
		}

/*		for(i=0;i<k;++i)
			printf("%d\n", a[i]);
*/
		if(poss==1)
			printf("%d\n", ans);
		else
			printf("-1\n");
	}

	return 0;
}