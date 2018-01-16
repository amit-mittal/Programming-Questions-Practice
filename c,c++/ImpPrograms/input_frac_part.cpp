#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int n;
int cnt;
int diff;
int ans;
int up,down;
int a[4000];
int main()
{
    cin>>n;
    for(int i=0;i<2*n;++i)
    {
            scanf("%*d.%d",&a[i]);
            if(a[i]==0)++cnt;
    }
    sort(a,a+2*n);
    for(int i=0;i<n;++i)
    {
            diff+=a[i];
    }
    for(int i=n;i<2*n;++i)
    {
            diff-= (a[i]==0 ? 0 : 1000-a[i]);
    }
    ans=abs(diff);
    up=min(cnt,n);
    down=cnt-up;
    while (up>0&&down<n)
    {
          diff+=1000;
          ans=min(ans,abs(diff));
          up--,down++;
    }
    printf("%d.%03d\n",ans/1000,ans%1000);
    //while(1);
    return 0;
}
