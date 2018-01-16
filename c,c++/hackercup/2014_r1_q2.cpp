#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>

using namespace std;

#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define pll(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

int n, m, p;
vector< pair< pair<int, int>, string > > v;

int takeout(int start, bool playing[], int played[]){
	int curr_max = -1;
	int curr_max_index = -1;
	for(int j=start;j<n;j+=2){
		if(playing[j] && played[j]>=curr_max){
			curr_max = played[j];
			curr_max_index = j;
		}
	}
	playing[curr_max_index] = 0;
	return curr_max_index;
}

void putin(int start, bool playing[], int played[], int takenout){
	int curr_min = 100000;
	int curr_min_index = -1;
	for(int j=start;j<n;j+=2){
		if(j==takenout)
			continue;
		if((!playing[j]) && played[j]<curr_min){
			curr_min = played[j];
			curr_min_index = j;
		}
	}
	playing[curr_min_index] = 1;
}

int main() {
	int test;
	s(test);
	for(int t=1;t<=test;++t){
		v.clear();
		string temp;
		int percent, height;

		s(n), s(m), s(p);
		for(int i=0;i<n;++i){
			cin>>temp>>percent>>height;
			v.push_back( make_pair( make_pair(percent, height), temp ) );
		}
		sort(v.begin(), v.end(), greater< pair< pair<int, int>, string > >() );

		bool playing[35] = {0};
		int played[35] = {0};
		
		for(int i=0;i<(2*p);++i){
			playing[i] = true;
		}

		int team1 = n/2;
		int team2 = n/2;
		if(n%2 == 1)
			++team1;

		for(int i=1;i<=m;++i){
			for(int j=0;j<n;++j){
				if(playing[j])
					++played[j];
			}

			if(team1>p){
				int takenout = takeout(0, playing, played);
				putin(0, playing, played, takenout);
			}

			if(team2>p){
				int takenout = takeout(1, playing, played);
				putin(1, playing, played, takenout);
			}
		}

		vector<string> final_list;
		for(int i=0;i<n;++i){
			if(playing[i]){
				final_list.push_back(v[i].second);
			}
		}
		sort(final_list.begin(), final_list.end());

		printf("Case #%d:", t);
		for(int i=0;i<final_list.size();++i){
			cout<<" "<<final_list[i];
		}
		nline;
	}
	return 0;
}
