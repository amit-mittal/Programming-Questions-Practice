#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define mp make_pair
#define ABS(a) ((a)>=0?(a):(-(a)))
#define s(d) scanf("%d", &(d))
#define sd(d) scanf("%lld", &(d))
#define pb push_back
#define debug(arr) cout<<"arr: ";for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) cout<<arr[i]<<" ";cout<<endl;
typedef long long ll;
ll a[100];
int n;
int M = 1<<10;
ll dp[100][1<<10];
int card[100][1<<10];

int cantdo(int i, int j){
    ll t = a[i];
    //int valid = 1;
    while (t){
        int x = 1<<(t%10);
        if ((x&j)==0) return 1;
        t/=10;
    }
    return 0;
}

int findk(int i, int j){
    int x=0; ll t=a[i];
    while (t){
        x|=1<<(t%10);
        t/=10;
    }
    return j^x;
}

void solve(){

int i, j;
    for (j=0; j<M; j++){
        if (cantdo(0, j)){
            dp[0][j] = 0;
            card[0][j] = 0;
        } else {
            card[0][j] = 1;
            dp[0][j] = a[0];
        }
    }
    //ll mmx
    for (i=1; i<n; i++){
        for (j=0; j<M; j++){
            if (cantdo(i, j)){
                dp[i][j] = dp[i-1][j];
                card[i][j] = card[i-1][j];
            } else {
                int k = findk(i,j);
                if (a[i] + dp[i-1][k] > dp[i-1][j]){
                    dp[i][j] = dp[i-1][k]  + a[i];
                    card[i][j] = card[i-1][k] + 1;
                } 
                else if (a[i] + dp[i-1][k] == dp[i-1][j] && card[i-1][k] + 1>=card[i-1][j]){
                    dp[i][j] = dp[i-1][k]  + a[i];
                    card[i][j] = card[i-1][k] + 1;
                }
                else {
                    dp[i][j] = dp[i-1][j];
                    card[i][j] = card[i-1][j];
                }
                //dp[i][j] = MAX(a[i] + dp[i-1][k], dp[i-1][j]);
            }
        }
    }
    
    //findmax
    ll mx=-1; int mxcard=-1;
    for (j=0; j<M; j++){
        if (dp[n-1][j]>mx){
            mx = dp[n-1][j];
            mxcard = card[n-1][j];
        } else if (dp[n-1][j] == mx && card[n-1][j] > mxcard){
            mxcard = card[n-1][j];
        }
    }
    printf("%d\n", mxcard);
}

int main(){
    //int n;
    int i;
    while (s(n)==1){
        
        for (i=0; i<n; i++){
            sd(a[i]);
        }
        solve();
    }
    return 0;
}