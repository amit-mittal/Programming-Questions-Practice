/*
ID: amit.mi1
PROG: beads
LANG: C++
*/
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
#include <fstream>

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

struct cmp_str
{
   bool operator()(char const *a, char const *b)
   {
      return strcmp(a, b) < 0;
   }
};

int main() {
	ifstream input;
	input.open("beads.in");

	int n, total;
	char a[400];
	input >> n;
	input >> a;
	input.close();

	//do processing
	char str[1500];
	strcpy(str, a);
	strcat(str, a);
	strcat(str, a);
	
	for(int start = n ; start<2*n ; ++start){
		int count1 = 0;
		int col1 = 0;
		for(int i = start;i>(start-n);--i){
			if(str[i]=='b'){
				if(col1==0)
					col1 = 1;
				else if(col1==2)
					break;
				++count1;
			} else if(str[i]=='r'){
				if(col1==0)
					col1 = 2;
				else if(col1==1)
					break;
				++count1;
			} else {
				++count1;
			}
		}
		
		int count2 = 0;
		int col2 = 0;
		for(int i = start+1;i<=start+n;++i){
			if(str[i]=='b'){
				if(col2==0)
					col2 = 1;
				else if(col2==2)
					break;
				++count2;
			} else if(str[i]=='r'){
				if(col2==0)
					col2 = 2;
				else if(col2==1)
					break;
				++count2;
			} else {
				++count2;
			}
		}
		
		int temp = count1+count2;
		total = max(total, temp);
	}
	total = min(total, n);
	
	ofstream output;
	output.open ("beads.out");
	output << total << '\n';
	output.close();
	
	return 0;
}
