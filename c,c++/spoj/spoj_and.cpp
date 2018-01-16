#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

const int N=41;
const unsigned long long MAX = 0x0fffffffffffffffLL;
int t,c,n,k;
long long a[N],ans;
long long b[N];

void dfs(int t,int d,long long num)//t表示下标 d表示取元素个数 num为上次计算最小值
{
    if (ans>num)ans=num;//2剪枝
    if (d==k||t==n+1)return;
    long long s=num;
    s&=b[t];
    if (s>=ans)return;//1剪枝
    dfs(t+1,d+1,num&a[t]);
    dfs(t+1,d,num);
}

int main()
{
    scanf("%d",&t);
    c=0;
    while (t--)
    {
        printf("Case #%d: ",++c);
        scanf("%d%d",&n,&k);
        for (int i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a+1,a+n+1);
        b[n]=a[n];
        for (int i=n-1;i>=1;i--)//将逆序与预处理暂存
        {
            b[i]=a[i]&b[i+1];
        }
        ans=MAX;
        dfs(1,0,MAX);
        printf("%lld\n",ans);
    }

    return 0;

}
