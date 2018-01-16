#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare (const void *pa,const void *pb ) {
    if ( *(int*)(pa) > *(int*)(pb) ) return -1;
  	if ( *(int*)(pa) < *(int*)(pb) ) return 1;
    return 0;
}

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
	int test,i,n,count,m,count1,left,right;
	int b[100005],max;
	int c[100005];
	char a[100005],ch;
	int d[100005][2];

	fastRead(&test);

	while(test--){
		count=0;count1=0;
		
		fastRead(&n);
		
		for(i=0;i<n;++i){
			ch=getchar_unlocked();
			a[i]=ch;
		}

		for(i=0;i<n;++i){
			if(a[i]=='0')
				++count;

			b[i+1]=count;

			if(a[n-1-i]=='1')
				++count1;

			c[n-i]=count1;
		}
/*
		for(i=n-1;i>=0;--i){
			if(a[i]=='1')
				++count1;

			c[i+1]=count1;
		}*/

		b[0]=0;
		c[n+1]=0;

		fastRead(&m);

		while(m--){
			max=-1;
			fastRead(&left);
			fastRead(&right);

			for(i=left;i<=right;++i){
				if(b[i]+c[i]>max)
					max=b[i]+c[i];
			}
			printf("%d\n",max-b[left-1]-c[right+1]);
		}
	}
	return 0;
}

/*
			
*/