#include<stdio.h>

int main(void)
{
	int a,b,c;
	for(; scanf("%d %d %d", &a, &b, &c) == 3; )
	{
		if(!(a || b || c)) break;
		if(c - b == b - a) printf("AP %d\n", (c<<1) - b);
		else printf("GP %d\n", (c * c) / b);
}

	return 0;
}
