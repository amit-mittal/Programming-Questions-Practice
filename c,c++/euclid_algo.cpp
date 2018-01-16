#include <stdio.h>

int main (int argc, const char * argv[]) {
    // This program is a C representation of Algorithm E
     // in Donald E. Knuth's The Art of Computer Programming Vol 1
    
     int a, A, b, B, c, d, m, n, q, r = 1, t, x;
     //A = a' B = b' from the book
     
     printf("\n\n\n\nThis program will find the Greatest Common Factor of two numbers\n");
     printf("m = ");
     scanf ("%d", &m);
     printf("n = ");
     scanf ("%d", &n);
     printf("\n\nWorking numbers\n\n");
     printf("A\t a\t B\t b\t c\t d\t q\t r\n");
     printf("------------------------------------------------------------------\n");
     
     A = b = 1;
     a = B = 0;
     c = m;
     d = n;
     //a' <- b <- 1, a <- b' <- 0, c <- m, d <- n
     
     while (r != 0)
          {
               q = (c / d);
               r = (c % d);
               
               printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", 
                    A, a, B, b, c, d, q, r);
               
               x = d;
               c = d;
               d = r;
               t = A;
               A = a;
               a = (t - (q * a));
               t = B;
               B = b;
               b = (t - (q * b));
          }
     
     printf("------------------------------------------------------------------\n");
     printf("\nThe Greatest Common Divisor of %d and %d is %d\n\n", m, n, x);
     
     return 0;
}

