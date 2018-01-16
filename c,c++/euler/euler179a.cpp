#include <stdio.h>
#include <time.h>

const int N = 10000000;

int sieve[N];

int main()
{
    double dtime=clock();
    int count = 0;
    for(int n = 2;n<N;n++)
    {
        for(int i = n;i<N;i+=n)
            sieve[i]++;

        if(sieve[n] == sieve[n-1])
            count++;
    }

    printf("%d,time=%.3lf sec.\n",count,(double) (clock()-dtime)/CLOCKS_PER_SEC);
    return 0;
}
