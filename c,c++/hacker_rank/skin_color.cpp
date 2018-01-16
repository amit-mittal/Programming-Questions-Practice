#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

#define s(t) scanf("%d",&t)

using namespace std;

vector< vector< vector<int> > > v;

int check(int r, int g, int b){
	int count = 0;

	for(int i=-3;i<=3;++i){
		for(int j=-3;j<=3;++j){
			for(int k=-3;k<=3;++k){
				if(r+i>=0 && r+i<=255 && g+j>=0 && g+j<=255){
					for(int l=0;l<v[r+i][g+j].size();++l){
						if(v[r+i][g+j][l]==b+k){
							++count;
							break;
						}
					}
				}
			}
		}
	}
	return count;
}

int main(){
	int test, r, g, b, ans, t, flag;	
	
	v.resize(256);
	for(int i=0;i<256;++i)
		v[i].resize(256);

	FILE *fp = fopen("trainingdata.txt", "r");
	
	fscanf(fp, "%d", &t);
	while(!feof(fp)){
		fscanf(fp, "%d", &r);
		fscanf(fp, "%d", &g);
		fscanf(fp, "%d", &b);
		fscanf(fp, "%d", &ans);
		if(ans==1)
			v[r][g].push_back(b);
	}

	fclose(fp);

	s(test);
	while(test--){
		flag=0;
		s(r),s(g),s(b);

		for(int i=0;i<v[r][g].size();++i){
			if(v[r][g][i]==b){
				flag=1;
				printf("1\n");
				break;
			}
		}

		if(flag==0){
			int fav = check(r,g,b);
			if(fav>0)
				printf("1\n");
			else
				printf("2\n");
		}
	}
	return 0;
}