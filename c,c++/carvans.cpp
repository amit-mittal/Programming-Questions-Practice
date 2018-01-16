#include <iostream>
#include <stdio.h>

using namespace std;

inline void fastRead(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}

int main(){
	int test,count,n,a,min,i;

//	scanf("%d",&test);
	fastRead(&test);

	while(test--){
		count=1;
		
//		scanf("%d",&n);
		fastRead(&n);
		
//		scanf("%d",&a);
		fastRead(&a);
		min=a;

		for(i=1;i<n;++i){
		//	scanf("%d",&a);
			fastRead(&a);

			if(a<=min){
				++count;
				min=a;
			}
		}

		printf("%d\n",count);
	}

	return 0;
}