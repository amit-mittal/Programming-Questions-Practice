#include<stdio.h>

int main ()
{
long long int result [500000] = {0};
long long int i, j, p, t, n;
for (i = 0; i <500000; i++)
{
p = i + 1;
for (j = 2 * p; j<= 500000; j+=p)
{
result[j-1]+=p;
}
}
scanf ("%lld", &t);
while (t--)
{
scanf ("%lld", &n);
printf ("%lld\n", result[n-1]);
}
return 0;
}
