#include<stdio.h>

int main(void)
{
	int a,b,c,test;
	scanf("%d\n",&test);
	
	while(test--)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(!(a || b || c)) break;
		if(c - b == b - a) printf("%d\n", (c<<1) - b);
		else printf("%d\n", (c * c) / b);
}

	return 0;
}
