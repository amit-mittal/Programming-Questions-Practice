#include <iostream>
#include <cstdio>
#include <cstdlib>
#define MAX 800
using namespace std;

int john[MAX] = {0};

int sum_of_digits(int n){
	int sum = 0;
	while(n>0){
		sum += ((n%10) * (n%10));
		n = n/10;
	}
	return sum;
}

// n should be less than MAX
bool is_one(int n){
	if (n==0) return false;
	if (john[n] == 1) return true;
	if (john[n] == 4) return false;

	bool ans = is_one(sum_of_digits(n));

	if(ans){
		john[n] = 1;
		return true;
	}
	else {
		john[n] = 4;
		return false;
	}
}

int main(){

	john[1] = 1;
	john[4] = 4;

	char x1[15], y1[15], k1[15];
	int x, y, k;
	scanf("%s", x1);
	scanf("%s", y1);
	scanf("%s", k1);
	x = atoi(x1);
	y = atoi(y1);
	k = atoi(k1);
	if(x<=0 || y<=0 || k<=0){
		printf("Invalid Input\n");
		return 0;
	}


	int n = 0;
	while((n*(n+1))/2 < x)
		n++;
	int sum = (n*(n+1))/2;
	int counter = 0;
	while(sum <= y){
		int temp = sum;
		if(temp >= MAX)
			temp = sum_of_digits(temp);
		if(is_one(temp))
			counter++;
		if(counter == k)
			break;
		sum += n+1;
		n = n+1;
	}

	if(counter == k)
		printf("%d\n", sum);
	else
		printf("No number is present at this index\n");
	return 0;
}