#include <iostream>
#include <cstdio>

int exp(int base, int power){
	if(power == 0)
		return 1;

	int r = 1;
	while(power>0){
		if(power%2 == 1){
			r = r*base;
			power--;
		}
		base*=base;
		power/=2;
	}
	return r;
}

int main(int argc, char const *argv[]){
	int base, power;

	scanf("%d %d", &base, &power);
	printf("%d\n", exp(base, power));

	return 0;
}