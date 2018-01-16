#include<stdio.h>
#include<math.h>

//this is a wrong solution
//this program tells how many primes are less than a n if there are many such queries

int main()
{
	int test,count,num,i,val,array[1000002]={0}, b[1000002]={0};
	
	scanf("%d",&test);
	
	for(i=2;i<=1000000;++i){
		if(array[i]==0){
			for(val=i*2;val<=1000000;val+=i){
                array[val]=1;
            }
			b[i]=b[i-1]+1;
		}
		else
			b[i]=b[i-1];
	}

	while(test--)
	{
		count=0;
		
		scanf("%d",&num);

		printf("%d\n",b[num]);
	}

	return 0;
}
