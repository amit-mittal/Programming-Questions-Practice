//Alternate solution is Rabin-Miller
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

const int SQ = (1<<16)+1;
const int BL = 50;
bool pr[SQ];
unsigned p[SQ], sz;
 
unsigned get (unsigned r) {
	if (r <= SQ)  return upper_bound (p, p+sz, r) [-1];
	memset (pr, 1, BL);
	unsigned l = max (r-BL+1, SQ+1u);
	for (unsigned i=0; i<sz; ++i) {
		unsigned j = l / p[i] * p[i];
		if (j < l)  j += p[i];
		j -= l;
		for (; j<BL; j+=p[i])
			pr[j] = false;
	}
	for (int i=BL-1; i>=0; --i)
		if (pr[i])
			return i+l;
	return -1;
}
 
int main() {
	memset (pr, true, sizeof pr);
	for (int i=2; i<SQ; ++i)
		if (pr[i]) {
			p[sz++] = i;
			for (int j=i+i; j<SQ; j+=i)
				pr[j] = false;
		}
 
	int ts;
	cin >> ts;
	for (int t=0; t<ts; ++t) {
		unsigned n;
		scanf ("%u", &n);
		--n;
		unsigned res;
		while ((res = get (n)) == -1)
			n -= BL;
		printf ("%u\n", res);
	}
}
