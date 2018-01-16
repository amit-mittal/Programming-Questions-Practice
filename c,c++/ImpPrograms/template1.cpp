#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

#define LL long long
#define LD long double

#define VI vector<int>

#define sd(x) x = GetNextInt()
#define slld(x) scanf("%lld",&x)

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define PII pair<int,int>
#define PPII pair< PI , PI >

#define INF 2000000009

#if 0
#define get getchar_unlocked
#else
#define get getchar
#endif

int next_int;
char in_char;

inline int GetNextInt(){
	in_char = ' ';
	while((in_char < '0') || (in_char > '9')){
		in_char = get();
	}
	next_int = 0;
	while((in_char >= '0') && (in_char <= '9')){
		next_int *= 10;
		next_int += in_char - 48;
		in_char = get();
	}
	return next_int;
}

LL PowerMod(LL base,LL power,LL mod){
	LL ret = 1;
	if(base >= mod){
		base %= mod;
	}
	while(power > 0){
		if((power & 1) == 1){
			ret *= base;
			if(ret >= mod){
				ret %= mod;
			}
		}
		power >>= 1;
		base *= base;
		if(base >= mod){
			base %= mod;
		}
	}
	return ret;
}

inline bool validchar(char ch){
	if((ch >= 'a') && (ch <= 'z')){
		return true;
	}
	if((ch >= 'A') && (ch <= 'Z')){
		return true;
	}
	if((ch >= '0') && (ch <= '9')){
		return true;
	}
	return false;
}

vector<string> GetStringsFromLine(){
	vector<string> ret;
	char ch;
	string s;
	ch = ' ';
	while(true){
		while(!validchar(ch)){
			if(ch == '\n'){
				return ret;
			}
			ch = get();
		}
		s = "";
		while(validchar(ch)){
			s = s + ch;
			ch = get();
		}
		ret.PB(s);
	}
}

/* Main Code */

#define MAXN 100111
#define MAXX 51
#define MOD 1000000007

int nop, prime[MAXN];
int sop[MAXN], dp[MAXN][MAXX];
bool isp[MAXN];
vector<int> pf[MAXN];

inline void takemod(int &x){
	if(x >= MOD){
		x -= MOD;
	}
}

int main(){
	Pre();
	int t;
	sd(t);
	while(t--){
		Solve();
	}
	return 0;
}
