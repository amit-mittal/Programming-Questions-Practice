#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstring>

#define LL long long 

using namespace std;

int main(){
	LL int i , j;
	LL int t, a[100005];
	LL int n, sum, count = 0, total;
	double ans;

	scanf("%lld %lld", &n, &t);
	
	for(i=0;i<n;++i){
		scanf("%lld",&a[i]);
	}
	a[n]=(long long int)INT_MAX;

	for(i=0;i<n;++i){
		sum=a[i];
		for(j=i+1;j<=n;++j){
			if(sum<=t)
				++count;
			else
				break;
			sum+=a[j];
		}
	}

	total = (n*(n+1)/2);
//	cout<<total<<endl;
	ans = (double)count/total;

	if(ans<0.00000001)
		ans = 0.0;

	string s;
	string t1;
	stringstream out;
	out << ans;
	s = out.str();

	t1 = s.substr(s.find(".")+1);
	int c = t1.length();
	if(c>=9)
		c=9;
	cout<<setprecision(c)<<ans<<endl;
//	printf("%s\n", test);

	return 0;
}