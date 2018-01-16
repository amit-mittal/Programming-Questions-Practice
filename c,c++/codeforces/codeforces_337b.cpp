#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

// compares a/b and c/d
int compare(int a, int b, int c, int d){
	if(a*d>c*b)
		return 1;
	else if(a*d<=c*b)
		return 2;
}

int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

void reduce(int *a, int *b){
	int hcf = gcd(*a, *b);
	if(hcf != 1){
		*a = *a/hcf;
		*b = *b/hcf;
	}	
}

int main(){
	int a,b,c,d;
	
	scanf("%d %d %d %d",&a, &b, &c, &d);
	
	int filled_n, filled_d;
	int val = compare(a,c,b,d);
	if(val == 1){
		filled_n = c*b*d*b;
		filled_d = d*d;
	} else {
		filled_n = d*c*a*a;
		filled_d = c*c;
	}
	int empty_n = ((a*b*filled_d) - filled_n);
	int empty_d = filled_d*a*b;
	
	//printf("%d %d %d %d\n", filled_n, filled_d, empty_n, empty_d);

	reduce(&empty_n, &empty_d);
	printf("%d/%d\n",empty_n, empty_d);

	return 0;
}
