//http://www.codechef.com/INVS2013/problems/CDZ1303
//http://discuss.codechef.com/questions/18331/farasa-editorial

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<string.h>
#include<cstring>
#include<stack>
#include<queue>
#include<cassert>
#include<cmath>
#include<complex>
using namespace std;

#define LL long long int 
#define PII pair<int,int> 
#define PB push_back
#define MP make_pair
#define INF 1000000000
const double PI = 4*atan(1);
typedef complex<double> base;

vector<base> omega;
int FFT_N;
void init_fft(int n)
{
     FFT_N  = n;
     omega.resize(n);
     double angle = 2 * PI / n;
     
     for(int i = 0; i < n; i++)
          omega[i] = base( cos(i * angle), sin(i * angle));
}

void fft (vector<base> & a)
{
     int n = (int) a.size();
     if (n == 1)  return;
     int half = n >> 1;
     
     vector<base> even (half),  odd (half);
     for (int i=0, j=0; i<n; i+=2, ++j)
     {
          even[j] = a[i];
          odd[j] = a[i+1];
     }
     fft (even), fft (odd);
     
     for (int i=0, fact = FFT_N/n; i < half; ++i)
     {
          base twiddle =  odd[i] * omega[i * fact] ;
          a[i] =  even[i] + twiddle;
          a[i+half] = even[i] - twiddle;
     }
}
void multiply (const vector<long long> & a, const vector<long long> & b, vector<long long> & res)
{
     vector<base> fa (a.begin(), a.end()),  fb (b.begin(), b.end());
     int n = 1;
     while (n < 2*max (a.size(), b.size()))  n <<= 1;
     fa.resize (n),  fb.resize (n);
     
     init_fft(n);
     fft (fa),  fft (fb);
     for (size_t i=0; i<n; ++i)
          fa[i] = conj( fa[i] * fb[i]);
     fft (fa);

     res.resize (n);
     for (size_t i=0; i<n; ++i)
          res[i] = (long long) (fa[i].real() / n + 0.5);
}
int main(){
    int t,n1,n2,i,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n1,&n2);
        vector<LL> a,b,res;
        for(i=0;i<=n1;i++){
            scanf("%d",&x);
            a.PB(x);
        }
        for(i=0;i<=n2;i++){
            scanf("%d",&x);
            b.PB(x);
        }
        printf("%d\n",n1+n2);
        multiply(a,b,res);
        for(i=0;i<=n1+n2;i++)
            printf("%d ",(int)res[i]);
        printf("\n");
    }
	return 0;
}


