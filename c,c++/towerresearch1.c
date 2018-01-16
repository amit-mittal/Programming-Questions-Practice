#include <stdio.h>

int main(){
	int test,p1,p2,alpha,beta,n,k,i,current=0,longest=-1,pi,pj;
	long long int val;

	scanf("%d",&test);

	while(test--){
		longest=-1;
		current=2;

		scanf("%d %d %d %d %d %d",&p1,&p2,&alpha,&beta,&n,&k);
/*
		if(alpha>=n)
			alpha%=n;

		if(beta>=n)
			beta%=n;
*/
		pi=p1;
		pj=p2;

	/*	if(pi>pj)//to see if increasing or decreasing
			start=0;
		else
			start=1;
*/
		printf("%d\n%d\n", pi,pj);

		for(i=0;i<k;++i){
			val=(beta*pi);

			if(val>=n)
				val%=n;

			val+=(alpha*pj);

			if(val>=n)
				val%=n;

			printf("%lld \n", val);

			if((val>pj && pj<pi)||(val<pj && pj>pi))
				++current;
			else
			{
				if(current>longest)
					longest=current;

				current=2;
			}

			pi=pj;
			pj=val;
		}

		printf("%d\n",longest);
	}

	return 0;
}