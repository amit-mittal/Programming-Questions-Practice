#include <iostream>
#include <cstdio>
#include <map>
#define PII pair<int, int>

using namespace std;

double f(int n, int m, map<PII, double> M){
    if(M.find(make_pair(n, m)) != M.end()) return M[make_pair(n, m)];
    if(m == 0){
        M[make_pair(n, m)] = n;
        return n;
    }
    if(n < 0 || m < 0) return 0;

    double a1, a2, a3, a4, a5;
    a1 = ((n*(n-1))/2)*(3 + f(n-2, m, M));
    a2 = (2*m*n)*(2 + f(n, m-1, M));
    a3 = m*(1 + f(n, m-1, M));
    a4 = (m*(2*m-2))*(1 + f(n+2, m-2, M));
    a5 = (a1 + a2 + a3 + a4)/(((2*m+n)*(2*m+n-1))/2);
    M[make_pair(n,m)] = a5;
    return a5;
}

int main(){
   
    int p, q;
    while(scanf("%d %d", &p, &q) == 2){  
        map<PII, double> M;
        printf("%.4lf\n", f(0, (p*q)/2, M));
    }
    return 0;
}