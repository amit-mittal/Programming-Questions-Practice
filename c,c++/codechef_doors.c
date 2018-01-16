#include<stdio.h>
#include<math.h>

int main()
{
	int test,n;
	
	scanf("%d",&test);
	
	while(test--){
		scanf("%d",&n);
		
		printf("%d\n",(int)sqrt(n));
	}
	
	return 0;
}
