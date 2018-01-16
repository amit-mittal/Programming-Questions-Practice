#include <cstdio>
#include <cstring>

int max(int a, int b) {return a > b ? a : b;}
char a[110], b[110], x[110];
int d[110][110][110], la, lb, lx, f[110];

//prefix of Knuth-Morris-Pratt
void getFail(char *P, int *f) {
    int m = strlen(P);
    f[0] = f[1] = 0;
    for(int i = 1; i < m; ++i) {
        int j = f[i];
        while(j && P[i] != P[j]) j = f[j];
        f[i+1] = P[i] == P[j] ? j + 1 : 0;
    }
}

int dp(int i, int j, int k) {
    if(i > la || j > lb || k >= lx) return d[i][j][k] = 0;
    if(d[i][j][k] >= 0) return d[i][j][k];

    d[i][j][k] = max(dp(i, j+1, k), dp(i+1, j, k));

    if(a[i] == b[j]) {
        int t = k;
        while(t && x[t] != a[i]) t = f[t];
        if(x[t] == a[i]) ++t;
        if(t < lx) {
            d[i][j][k] = max(d[i][j][k], dp(i+1, j+1, t) + 1);
        }
    }

    return d[i][j][k];
}

void print(int i, int j, int k) {
    if(i > la || j > lb || k >= lx) return;

    if(d[i][j][k] == d[i][j+1][k]) print(i, j+1, k);
    else if(d[i][j][k] == d[i+1][j][k]) print(i+1, j, k);
    else if(a[i] == b[j]) {
        int t = k;
        while(t && x[t] != a[i]) t = f[t];
        if(x[t] == a[i]) ++t;
        if(t < lx) {
            putchar(a[i]);
            print(i+1, j+1, t);
        }
    }
}

int main() {
    scanf("%s%s%s", a+1, b+1, x);
    la = strlen(a+1), lb = strlen(b+1), lx = strlen(x);
    getFail(x, f);
    memset(d, -1, sizeof d);
    if(dp(1, 1, 0)) { 
//      printf("%d\n", d[1][1][0]);
        print(1, 1, 0); puts("");
    }
    else puts("0");
    return 0;
}