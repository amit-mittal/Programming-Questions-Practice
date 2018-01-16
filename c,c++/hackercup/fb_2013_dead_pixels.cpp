#include"stdio.h"
#include"iostream"
#include"cassert"
#include"map"
#include"vector"
#include"utility"
#define FOREACH(it,s) for(typeof((s).begin()) it=(s).begin();it!=(s).end();it++)
int curct;
using namespace std;
map<int,int> dead_win;
int P;
void put(int i){
	typeof(dead_win.upper_bound(i)) it = dead_win.lower_bound(i);
	int z=it->first;
	it--;
	int x=it->first;
	int y=i;
	assert(x<y && y<=z);
//cout<<"put "<<x<<" "<<y<<" "<<z<<" inc "<<  max(y-x-P,0) +max(z-y-P,0) -max(z-x-P,0) <<"\n";
	curct+= max(y-x-P,0) +max(z-y-P,0) -max(z-x-P,0);
	dead_win[i]++;
}
void pull(int i){
	typeof(dead_win.upper_bound(i)) it = dead_win.lower_bound(i);
	if(it->second!=1){it->second--; return;}
	int y=it->first;
	it--;
	int x=it->first;
	it++; it++;
	int z=it->first;
	assert(x<y && y<z);
	it--;
//cout<<"pull "<<x<<" "<<y<<" "<<z<<" inc "<<-max(y-x-P,0) -max(z-y-P,0) +max(z-x-P,0) <<" it = ("<<it->first<<","<<it->second<<"\n";
	curct+= -max(y-x-P,0) -max(z-y-P,0) +max(z-x-P,0);
	
	if(it->second==1)dead_win.erase(it);
	else it->second--;
}
int main(){
	int T;
	scanf("%d",&T);
	for(int tt=1;tt<=T;tt++) {
		printf("Case #%d: ",tt);
		int W, H, Q, N, X, Y, a, b, c, d;
		scanf("%d%d%d%d%d%d%d%d%d%d%d",&W,&H,&P,&Q,&N,&X,&Y,&a,&b,&c,&d);
		vector<int> dead[H];
		curct=W-P+1;
//bool blocked[H][W];
//for(int i=0;i<H;i++)for(int j=0;j<W;j++)blocked[i][j]=0;
		for(int i=0;i<N;i++){
			dead[Y].push_back(X);
//blocked[Y][X]=1;
			int x=X;
			X=(X*(long long)a+Y*(long long)b+1)%W;
			Y=(x*(long long)c+Y*(long long)d+1)%H;
		}
//cout<<"\n";
//for(int i=0;i<H;i++){
//	for(int j=0;j<W;j++)cout<<(blocked[i][j]?"*":".");
//	cout<<"\n";
//}
		dead_win.clear();
		dead_win[W]=1;
		dead_win[-1]=1;
		long long ans=0;
		for(int i=0;i<Q;i++)
			FOREACH(j,dead[i])
				put(*j);
		ans+=curct;
//cout<<curct<<"\n";
		for(int i=Q;i<H;i++){
			FOREACH(j,dead[i-Q])
				pull(*j);
			FOREACH(j,dead[i])
				put(*j);
			ans+=curct;
//cout<<curct<<"\n";
		}
		printf("%Ld\n",ans);
	}
}
