#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <list>
#include <cmath>
#include <map>
using namespace std;
 
#define MAX 10000
long long mem[MAX];
 
inline long long value(long long num) {
if (num == 0) return 0;
if (num < MAX && mem[num]) return mem[num];
long long ret = 0;
if (num / 2 < MAX && mem[num / 2]) ret += mem[num / 2];
else ret += value(num / 2);
if (num / 3 < MAX && mem[num / 3]) ret += mem[num / 3];
else ret += value(num / 3);
if (num / 4 < MAX && mem[num / 4]) ret += mem[num / 4];
else ret += value(num / 4);
return max(ret, num);
}
 
int main() {
for (long long i = 1; i < MAX; i++) {
mem[i] = value(i);
}
long long num;
while(cin >> num) {
cout << value(num) << endl;
}
return 0;
}
