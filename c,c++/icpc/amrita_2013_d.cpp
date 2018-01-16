#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <set>

#define PII pair<int, int>
#define mod(x) ((x)>0?(x):-1*(x))
#define MAX 100000000
#define ll long long
using namespace std;

ll f(ll a, ll b, ll c){
    return max(mod(a-b), max(mod(b-c), mod(c-a)));
}

int main() {
    int t, n;
    ll x;
    scanf("%d", &t);

    ll p[305][3], d[305][5];
    
    while(t--){ 
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
            scanf("%lld %lld %lld", &p[i][0], &p[i][1], &p[i][2]);
        d[0][0] = 0;
        d[0][1] = f(p[1][0], p[2][0], p[1][1]);
        d[0][2] = f(p[1][0], p[1][1], p[2][1]);
        d[0][3] = f(p[1][1], p[1][2], p[2][1]);
        d[0][4] = f(p[1][1], p[1][2], p[2][2]);
        
        for(int i = 1; i <= n; i++){
            
            x = MAX;
            x = min(x, f(p[i][0], p[i][1], p[i][2]) + d[i-1][0]);
            if(i-2>=0){
                x = min(x, d[i-2][1] + f(p[i][1], p[i][2], p[i-1][2]));
                x = min(x, d[i-2][4] + f(p[i][0], p[i][1], p[i-1][0]));
            }   
            if(i-3>=0){
                x = min(x, d[i-3][0] + f(p[i][0], p[i-1][0], p[i-2][0]) + f(p[i][1], p[i-1][1], p[i-2][1]) + f(p[i][2], p[i-1][2], p[i-2][2]));
                x = min(x, d[i-3][4] + f(p[i][0], p[i-1][0], p[i-2][0]) + f(p[i][1], p[i][2], p[i-1][1]));
                x = min(x, d[i-3][1] + f(p[i][2], p[i-1][2], p[i-2][2]) + f(p[i][0], p[i][1], p[i-1][1]));
            }
            d[i][0] = x;

            x = MAX;
            if(i+2 <= n)
                x = min(x, d[i][0] + f(p[i+2][0], p[i+1][0], p[i+1][1]));
            if(i-1 >= 0 && i+2 <= n)
                x = min(x, d[i-1][3] + f(p[i+2][0], p[i+1][0], p[i][0]));
            d[i][1] = x;

            x = MAX;
            if(i+2 <= n)
                x = min(x, d[i][0] + f(p[i+1][0], p[i+1][1], p[i+2][1]));
            if(i+2 <= n && i-2 >= 0)
                x = min(x, d[i-2][4] + f(p[i+2][1], p[i+1][1], p[i][1]) + f(p[i+1][0], p[i][0], p[i-1][0]));
            d[i][2] = x;

            x = MAX;
            if(i+2 <= n)
                x = min(x, d[i][0] + f(p[i+1][1], p[i+2][1], p[i+1][2]));
            if(i+2 <= n && i-2 >= 0)
                x = min(x, d[i-2][1] + f(p[i+2][1], p[i+1][1], p[i][1]) + f(p[i+1][2], p[i][2], p[i-1][2]));
            d[i][3] = x;
                
            x = MAX;
            if(i+2 <= n)
                x = min(x, d[i][0] + f(p[i+2][2], p[i+1][2], p[i+1][1]));
            if(i-1 >= 0 && i+2 <= n)
                x = min(x, d[i-1][2] + f(p[i+2][2], p[i+1][2], p[i][2]));
            d[i][4] = x;
            
        }
        printf("%lld\n", d[n][0]);
    }
    return 0;
}


