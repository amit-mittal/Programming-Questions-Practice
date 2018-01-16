#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n,m,max_money=0,min_money=0;
    
    scanf("%d %d",&n,&m);
    
    if(n==0&&m!=0)
        printf("Impossible\n");
    else
    {
        min_money+=n;
        max_money+=n;
        
        if(m!=0)
            max_money+=m-1;
        
        if(m>n)
            m=m-n;
        else
            m=0;
        min_money+=m;
        
        printf("%d %d\n",min_money,max_money);
    }
    
    return 0;
}
