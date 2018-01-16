#include <iostream>
#include <cstdio>

using namespace std;

int n;

int** multiply(int **a, int **b){
	int **c;

	c = new int*[n];
	for(int i=0;i<n;++i)
		c[i] = new int[n];

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			for(int k=0;k<n;++k){
				c[i][j]+=(a[i][k]*b[k][j]);
			}
		}
	}

	return c;
}

void scan(int **a){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			scanf("%d", &a[i][j]);
		}
	}
}

void print(int **a){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[]){
	int **a, **b;

	printf("Enter the dimension: ");
	scanf("%d", &n);

	a = new int*[n];
	for(int i=0;i<n;++i)
		a[i] = new int[n];

	b = new int*[n];
	for(int i=0;i<n;++i)
		b[i] = new int[n];

	scan(a);print(a);
	scan(b);print(b);

	int** c = multiply(a, b);
	print(c);

	delete(a), delete(b), delete(c);

	return 0;
}