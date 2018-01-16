#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstdlib>
#include<climits>
#include<cstring>
using namespace std;

#define CLR(a,x) memset(a,x,sizeof(a))
#define PB push_back
#define INF 1000000000
#define MOD 1000000007
#define MP make_pair
#define tr(container , it) for(typeof(container.begin()) it=container.begin() ; it!=container.end() ; it++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define REP(i,a) FOR(i,0,a)
#define LL long long
#define VI vector < int >
#define PII pair < int , int >


void precompute(void)
{
}
int px[1<<20],py[1<<20];
set < int > S;
map < int , int > mymap;
vector < VI > poi;
int main()
{
	int w,h,test,p,q,n,X,Y,a,b,c,d,i,t,ans,final,sz,cur,j,p1,p2;
	typeof(S.begin()) low,high;
	precompute();
	while(scanf("%d",&t)!=EOF)
	{
		test=0;
		while(t--)
		{
			scanf("%d%d",&w,&h);
			scanf("%d%d",&p,&q);
			scanf("%d",&n);
			scanf("%d%d%d%d%d%d",&X,&Y,&a,&b,&c,&d);
			px[0]=X;py[0]=Y;
			for(i=1;i<n;i++)
			{
				px[i]=(px[i-1]*a+py[i-1]*b+1)%w;
				py[i]=(px[i-1]*c+py[i-1]*d+1)%h;
			}
			poi.clear();
			poi.resize(h+10);
			for(i=0;i<n;i++)
			{
	//			swap(px[i],py[i]);
		//		printf("poi %d %d %d %d \n",px[i],py[i],w,h);
		//		fflush(stdout);
				poi[py[i]].PB(px[i]);
			}
			mymap.clear();
			for(i=-1;i<=w;i++)
				mymap[i]=0;
			mymap[-1]=1;
			mymap[w]=1;
			S.clear();
			S.insert(-1);
			S.insert(w);
			ans=w-p+1;
			final=0;
			for(i=0;i<h;i++)
			{
				sz=poi[i].size();
				for(j=0;j<sz;j++)
				{
					cur=poi[i][j];
					mymap[cur]++;
					if(mymap[cur]==1)
					{
						low=S.lower_bound(cur);
						low--;
						high=S.upper_bound(cur);
						p1=*low;
						p2=*high;
						ans-=max(0,(p2-p1-p));
						ans+=max(0,p2-cur-p)+max(0,cur-p1-p);
						S.insert(cur);
					}
				}
				if(i>=q-1)
				{
					final+=ans;
			//		printf("i=%d %d\n",i,final);
					sz=poi[i-(q-1)].size();
					for(j=0;j<sz;j++)
					{
						cur=poi[i-(q-1)][j];
						mymap[cur]--;
						if(mymap[cur]==0)
						{
							S.erase(cur);
							low=S.lower_bound(cur);
							low--;
							high=S.upper_bound(cur);
							p1=*low;
							p2=*high;
							ans+=max(0,(p2-p1-p));
							ans-=max(0,p2-cur-p)+max(0,cur-p1-p);
						}
					}
				}
			}
			printf("Case #%d: %d\n",++test,final);
		}
	}
	return 0;
}
