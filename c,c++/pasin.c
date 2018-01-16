    #include<stdio.h>
    #include<math.h>
     
    double X;
    int N,M;
     
    double C(int n,int k)
    {
    double num=1.0, den=1.0;
    for(int i=k,j=n ; i>=1 ; i--,j--)
    {
    num *= j;
    den *= i;
    }
    return num/den;
    }
     
    double T(int N,int M,int i)
    {
    double ans = C(N+M-i-1, M-i-1);
    if((M+i)&1) ans *= 2*cos((N+M-i)*X);
    else ans *= 2*sin((N+M-i)*X);
     
    if(((M+i)&3)==0 || ((M+i)&3)==3) return ans;
    else return -ans;
    }
     
    double F(int N,int M)
    {
    if(N<0) return 0;
    double ans=0;
    for(int i=0;i<M;i++)
    ans += C(M-1+i,i) * T(N,M,i) / pow(2*sin(X), i);
    if(M&1) return -ans;
    else return ans;
    }
     
    int main()
    {
    int T; scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
    scanf("%d%d%lf",&M,&N,&X);
    if(X==0) printf("0\n");
    else printf("%lf\n",F(N-M,M)/pow(2,M));
    }
    } 
