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
	cout.precision(10);

	LL int i , j;
	LL int t, a[100005];
	LL int n, sum, count = 0, total, total_sum;
	double ans;

	scanf("%lld %lld", &n, &t);
	
	for(i=0;i<n;++i){
		scanf("%lld",&a[i]);
	}
	a[n]=1000000007;

	total_sum=0;
	for(i=0;i<n;++i){
		sum=a[i];
		for(j=i+1;j<=n;++j){
			if(sum<=t){
				++count;
			}
			else
				break;
			sum+=a[j];
		}
	}

	ans = 0.0;
	for(i=0;i<n;++i){
		sum=a[i];
		for(j=i+1;j<=n;++j){
			if(sum<=t){
				ans += (double)sum/count;
			}
			else
				break;
			sum+=a[j];
		}
	}
//	ans = (double)total_sum/count;

//	printf("%.10g\n", ans);
/*	string s;
	string t1;
	stringstream out;
	out << ans;
	s = out.str();

	t1 = s.substr(s.find(".")-1);
	int c = t1.length();
	if(c>=10)
		c=10;*/
	cout<<ans<<endl;
//	cout<<setprecision(c)<<ans<<endl;

	return 0;
}