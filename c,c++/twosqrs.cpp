#ifdef WIN32
#define INPUT "%I64u"
#define _CRT_SECURE_NO_WARNINGS
#else
#define INPUT "%lld"
#endif

#include <stdio.h>
#include <math.h>

typedef unsigned long long ull_t;

bool check(ull_t n){
    ull_t x(0), y(static_cast<ull_t>(floor(sqrt(static_cast<double>(n)))));

    for(;; x++){
        while(x * x + y * y > n)
            --y;
        while(x * x + y * y < n)
            ++x;

        if(y < x)
            break;

        if(x * x + y * y == n)
            return 1;
    }

    return 0;
}

int main(int argc, char* argv[])
{
    ull_t n;
    int T;

    scanf("%i", &T);

    while(T-- > 0){
        int done = 0;

        scanf(INPUT, &n);

        printf("%s\n", check(n) ? "Yes" : "No");
    }

    return 0;
}
