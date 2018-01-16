#include <stdio.h>

int main(){
	int test, i, n, val, a[10000]={0}, count,j, count1;

	scanf("%d",&test);

	for(i=2;i*i<10000;++i){
		if(a[i] == 0){
			val = i*i;
			while(val<10000){
				a[val]=1;
				val+=i;
			}
		}
	}
/*
	for(i=2;i<10000;++i){
		if(a[i]==0)
			printf("%d\n", i);
	}*/

	while(test--){
		count = 0;
		count1 = 0;

		scanf("%d",&n);

		for(i=2;;++i){
			count1 = 0;

			for(j=2;j<i;++j){
				if(a[j]==0){
					if(i%j==0){
						++count1;
					}

					if(count1>=3)
						break;
				}
			}

			if(count1>=3)
				++count;

			if(count==n)
				break;
		}

		printf("%d\n", i);
	}

	return 0;
}