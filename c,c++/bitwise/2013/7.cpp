#include<iostream>
#include<stdio.h>

#define s(n) scanf("%d",&n)
#define MOD 1000000007
#define ll long long 

using namespace std;

int main(){
    ll int test, i ,j, fib[1005], ans, counter;
    scanf("%lld",&test);

    fib[1]=2;
    fib[2]=3;
    for(i=3;i<=1003;++i)
        fib[i]=(fib[i-1]+fib[i-2])%MOD;

    while(test--){
        ans=1;
        int code[1005][2];
        int visit[1005];
        int edge[1005][1005];

        scanf("%lld %lld",&n,&m);

        for(i=1;i<=n;++i){
            visit[i]=0;
            code[i][0]=code[i][1]=0;
            for(j=1;j<=n;++j)
                edge[i][j]=0;
        }
        
        for(i=0;i<m;++i){
            scanf("%lld %lld",&start,&end);
            edge[start][end]=1;
            code[start][0]=1;//outgoing
            code[end][1]=1;//incoming
        }

        for(counter=1;counter<=n;++counter){
            if(visit[counter]==-1){
                continue;
            }
            if(code[i][0]+code[i][1]==0){
                ans*=2;
                ans%=MOD;
                continue;
            }
            if(code[i][0]==0 && code[i][1]==1){//outgoing no, incoming yes
                visit[i]=1;
                continue;
            }
            if(code[i][0]==1 && code[i][1]==0){//outgoing yes, incoming no
                //do depth first search
                
                continue;
            }
            if(code[i][0]==1 && code[i][1]==1){
                continue;
            }
        }
    }
}