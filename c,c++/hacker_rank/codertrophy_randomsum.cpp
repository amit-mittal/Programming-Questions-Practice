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
/*
void remove_zeroes(double number, char * result, int buf_len)
  {
      char * pos;
      int len;
  
      snprintf(result, buf_len, "%lf", number);
      len = strlen(result);
  
      pos = result + len - 1;
   #if 0 
      while(*div != '.')
          div++;
  #endif
      while(*pos == '0')
          *pos-- = '\0';
  
      if(*pos == '.')
          *pos = '\0';
  
  }
*/
int main(){
	int n, i , j;
	int t, a[100005];
	LL int sum, count = 0, total;
	double ans;
//	char test[81];

	scanf("%d %lld", &n, &t);
	
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	a[n]=10000007;

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
	ans = (double)count/total;

//	remove_zeroes(ans, test, 81);

	string s;
	string t1;
	stringstream out;
	out << ans;
	s = out.str();

	t1 = s.substr(s.find(".")+1);
	int c = t1.length();
	if(c>=8)
		c=8;
	cout<<setprecision(c)<<ans<<endl;
//	printf("%s\n", test);

	return 0;
}