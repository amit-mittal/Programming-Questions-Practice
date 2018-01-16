Here is my code...
#include <iostream>
#include <cstdio>
#include <cctype>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cassert>
#include <string.h>

using namespace std;

#define GI ({int t;scanf("%d",&t);t;})
#define GL ({LL t;scanf("%lld",&t);t;})
#define GD ({double t;scanf("%lf",&t);t;})
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) FOR(i,0,n)
#define ROF(i,a,b) for(int i=a;i>b;i--)
#define SET(x,a) memset(x,a,sizeof(x));
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define tr(i,a) for( __typeof__(a.begin()) i=a.begin();i!=a.end();i++)
#define pb push_back
#define sz(a) (int)(a.size())
#define INF 100000000000000000LL
#define EPS (double)1e-9

#define is istringstream
#define os ostringstream
#define lb lower_bound
#define ub upper_bound
#define bs binary_search

typedef unsigned long long ULL;
typedef long long LL;
typedef set <int> si;
typedef pair< int,int > ii;
typedef pair< int, ii > pi;
typedef vector< ii > vii;
typedef vector < vii > vvii;
typedef vector< int > vi;
typedef vector< vi > vvi;

//char ch;

// FAST I/O
#define MAXX 10000000
char *ipos, *opos, InpFile[MAXX], OutFile[MAXX], DIP[30];
inline int input_int(int flag = 0){
while(*ipos <= 32)    ++ipos;
if ( flag  ) return (*ipos++ - '0');
int x = 0, neg = 0; char c;
while( true ) {
c = *ipos++; if(c == '-')    neg = 1;
else{
if(c <= 32)    return neg ? -x : x;
x = (x << 1) + (x << 3) + c - '0';
}
}
}
inline LL input_LL(int flag = 0){
while(*ipos <= 32)    ++ipos;
if ( flag  ) return (*ipos++ - '0');
LL x = 0, neg = 0; char c;
while( true ) {
c = *ipos++; if(c == '-')    neg = 1;
else{
if(c <= 32)    return neg ? -x : x;
x = (x << 1) + (x << 3) + c - '0';
}
}
}
inline void input_st(char *s){
while(*ipos <= 32)    ++ipos;
int pos = 0;char c;
while( true ) {
c = *ipos++;
if(c <= 32)    {s[pos] = '\0'; break;}
else s[pos++] = c;
}
}
inline void output(int x){
int y;
int dig = 0;
while(x || !dig)    {y = x / 10; DIP[dig++] = x - ((y << 3) + (y << 1)) + '0'; x = y;}
while(dig--)    *opos++ = DIP[dig];
}
inline void InitFASTIO(){
ipos = InpFile; opos = OutFile;
fread(InpFile, MAXX, 1, stdin);
}
inline void FlushFASTIO(){
fwrite(OutFile, opos - OutFile, 1, stdout);
}
//End of FAST I/O

#define MAXN 3000+5

int N, M;
//int ones[MAXN];
//int twos[MAXN];
int flip[MAXN]={0};
int heads[MAXN]={0};
int tails[MAXN]={0};
inline void init()
{
//     for(int i=1;i<MAXN;i++)
//    {
//      //  cout<<heads[i]<<"\t"<<tails[i]<<"\t"<<flip[i]<<endl;
//      tails[i]=1;
//      heads[i]=0;
//      flip[i]=0;
//    }
 //initialize(2 * node, b, (b + e) / 2, M, A, N);
         // initialize(2 * node + 1, (b + e) / 2 + 1, e, M, A, N);
}
inline void upda(int lo,int hi,int x,int y,int i)
{
    if(x > hi || y < lo) {}

else if(x <= lo && y >= hi){

heads[i]=(hi-lo+1)-heads[i];
flip[i] = !flip[i];

//return ;
}
else{
    int mid = (lo+hi)/2;
upda(lo, mid, x, y, 2*i);
upda(mid+1, hi, x, y, 2*i+1);
heads[i]=heads[2*i]+heads[2*i+1];

if(flip[i]){

heads[i]=(hi-lo+1)-heads[i];

}

}
}


inline void print(int n)
{
    cout<<"PRINT"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"\t"<<heads[i]<<"\t"<<"\t"<<flip[i]<<endl;
    }
}
inline int quer(int lo,int hi,int x,int y,int i,int flag)
{
  //see
    if(x>hi||y<lo) return 0;
    if(x<=lo && y>=hi){
        if(flag==0)
        return heads[i];
       else
        return (hi-lo+1)-heads[i];
    }
    int mid=(lo+hi)/2;
    int nflag=flag+flip[i];
    return quer(lo,mid,x,y,2*i,nflag%2)+quer(mid+1,hi,x,y,2*i+1,nflag%2);
}
int main(){
//InitFASTIO();
//N = input_int(), M = input_int();
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
scanf("%d",&N);
scanf("%d",&M);
int op, x, y;
//init();
REP(_,M){
    //print(N);
//op = input_int(), x = 1+input_int(), y = 1+input_int();
scanf("%d",&op);
scanf("%d",&x);
scanf("%d",&y);
if(!op)    upda(1, N, x, y, 1);
else {
    printf("%d\n",(quer(1, N, x, y, 1,0)));
//*opos++ = '\n';
}
}
//FlushFASTIO();
//GI;
return 0;
}