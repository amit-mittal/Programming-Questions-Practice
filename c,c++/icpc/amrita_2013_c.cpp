#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#define gc getchar_unlocked
using namespace std;
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define mp make_pair
#define ABS(a) ((a)>=0?(a):(-(a)))
#define s(w) scanf("%d", &(w))
#define sl(d) scanf("%lld", &(d))
#define pb push_back
#define debug(arr,n) cout<<"arr: ";for(int i=0; i<n); i++) cout<<arr[i]<<" ";cout<<endl;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long long int ll;

typedef struct block {
    int w, h;
} block;

bool operator<(const block& l, const block& r){
    return l.w*l.h > r.w*r.h;
}

char mat[11][11];
char buf[15];
int n,m;

vector<block> ord;

set<string> hm;

string getS(int i, int j, int h, int w){
    string t;
    t.resize(h*w);
    int cc=0;
    for (int x=i; x<=h+i-1; x++){
        for (int y=j; y<=j+w-1; y++){
            t[cc++] = mat[x][y];
        }
    }
    return t;
}

bool checkrepeat(int h, int w){
    hm.clear();
    for (int i=0; i+h-1<=n-1; i++){
        for (int j=0; j+w-1<=m-1; j++){
            string t = getS(i, j, h, w);
            if (hm.find(t)!=hm.end()){
                //cout<<*hm.find(t)<<endl;
                return true;
            }
            hm.insert(t);
        }
    }
    return false;
}

int main(){
    int tc;
    s(tc);
    while (tc--){
        s(n);s(m);
        for (int i=0; i<n; i++){
            scanf("%s", buf);
            for (int j=0; j<m; j++){
                mat[i][j] = buf[j];
            }
        }
        ord.clear();
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                //if (i==j) continue;
                block x;
                x.h=i; x.w=j;
                ord.pb(x);
            }
        }
        sort(ord.begin(), ord.end());
        
        bool found = false;
        int area = 0;
        
        for (vector<block>::iterator k = ord.begin(); k!=ord.end(); k++){
            if (checkrepeat(k->h, k->w)){
                area = k->h * (k->w);
                //printf("debug: %d %d\n", k->h, k->w);
                break;
            }
        }
        
        if (area==0){
            printf("0\n");
        } else {
            printf("%d\n", area);
        }
                
    }
        
    return 0;

}


