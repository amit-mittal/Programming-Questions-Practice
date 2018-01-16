#include <iostream>
#define MAXN 500 000
using namespace std;
int divsum [MAXN +1];
void gen () {
for (int i = 1; i * 2 <= MAXN; + + i)
for (int j = i * 2; j <= MAXN; j + = i)
divsum [j] + = i;
}
int main (void) {
gen ();
int t, n;
cin >> t;
for (int i = 0; i <t; + + i) {
cin >> n;
cout << divsum [n] << endl;
}
return 0;
}
