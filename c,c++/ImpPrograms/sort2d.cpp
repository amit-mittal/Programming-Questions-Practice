#include<stdio.h>
#include<algorithm>
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
using namespace std;
struct node
{
       int in;
       int val;
}a[1000];
bool compare(const node &lhs,const node &rhs)
{
     return(lhs.val<rhs.val);
} 
int main()
{
    int i,n,t,c,j,lhs,rhs;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
               scanf("%d",&c);
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
                     a[i].in=i+1;
                     scanf("%d",&a[i].val);
     }
     sort(a,a+n,compare);
     rhs=n-1;
     lhs=0;
     while(!(lhs>rhs))
     {
                    if(a[lhs].val+a[rhs].val>c)
                    {
                                               rhs--;
                                               
                    }
                    else if(a[lhs].val+a[rhs].val<c)
                    {
                         lhs++;
                    }
                    else
                    {
                        break;
                    }
     }
     printf("Case #%d: ",j+1);
     printf("%d %d\n",min(a[lhs].in,a[rhs].in),max(a[lhs].in,a[rhs].in));
     }
     return 0;
}
                     




















