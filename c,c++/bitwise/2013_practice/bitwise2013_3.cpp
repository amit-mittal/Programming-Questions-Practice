#include <iostream>
#include <cstdio>

#define s(a) scanf("%d",&a)

using namespace std;

int main(){
	int a[100005],b[100005],count,index;
	int n,q,i,j,first,val;
	char str[5];

	s(n);
	s(q);
	first=0;
	for(i=0;i<n;++i)
		a[i]=b[i]=0;

	while(q--){
		count=0;
		scanf("%s %d %d",str, &i, &j);
		if(str[0]=='Q'){
			if(i==0){
				if(first==0)
					++count;
			}
			val=first;
			for(index=1;index<=j;++index){
				val = (val + b[index-1])%3;//value of a[index]
				val = (val + 3)%3;
//				printf("%d %d\n",index,val);
				if(index>=i && val==0)
					++count;
			}
			printf("%d\n", count);
		}else{
			if(i==0){
				first=(first+1)%3;
				b[j]=(b[j]-1)%3;
			}
			else{
				b[i-1]=(b[i-1]+1)%3;
				b[j]=(b[j]-1)%3;
			}
/*			for(i=0;i<n;++i)
				printf("%d ",a[i]);
			printf("\n");
			for(i=0;i<n;++i)
				printf("%d ",b[i]);
			printf("\n");
*/		}
	}

	return 0;
}