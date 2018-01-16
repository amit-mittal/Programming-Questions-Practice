//Author: Amit Mittal
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector < vector <int> > v;

void pre_processing(){
	int t, r, val;

	//reading training data
	FILE *fp = fopen("topcoderdata.txt", "r");
	fscanf(fp, "%d", &t);
	v.resize(t);
	for(int c=0;c<t;++c){
		fscanf(fp, "%d", &r);
		while(r--){
			fscanf(fp, "%d", &val);
			v[c].push_back(val);
		}
	}
	fclose(fp);
	//end of training data
}

void answer(int a[], int n){
	int count1 = 0;
	int count2 = 0;
	for(int i=0;i<n;++i){
		if(v[i].size()>n){
			if(v[i][n]-v[i][n-1]>=0)
				++count1;
			else
				++count2;
		}
	}

	int counter = n-1;
	while(counter>=0){
		if(a[counter]-a[counter-1]>=0)
			--counter;
		else
			break;
	}

	int ans = 0;
	if(counter<n-1 && count1>count2)
		ans = 1;
	else if(count1>count2){
		int random = rand();
		if(2*random>RAND_MAX)
			ans = 1;
		else
			ans = 0;
	} else{
		int random = rand();
		if(2*random<RAND_MAX)
			ans = 1;
		else
			ans = 0;
	}

	printf("%d\n", ans);
}

int main() {
	srand(time(NULL));
	pre_processing();
	int test, n;
	int a[100];

	scanf("%d",&test);
	while(test--){
		scanf("%d", &n);
		for(int i=0;i<n;++i) {
			scanf("%d", &a[i]);
		}

		answer(a, n);
	}

	return 0;
}