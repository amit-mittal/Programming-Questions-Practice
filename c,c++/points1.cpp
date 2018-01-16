#include<iostream>
#include<unistd.h>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string.h>
#include<algorithm>
 
using namespace std;
 
pair<int,int> point[100001];
 
bool sortby(pair<int,int> a,pair<int,int> b)
{
if(a.first==b.first)
{
return a.second>=b.second;
}
else return a.first<=b.first;
}
 
int main()
{
// freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int t;
int n;
char temp;
 
scanf("%d\n",&t);
 
while(t)
{
scanf("%d\n",&n);
for(int i=0;i<n;i++)
{
scanf("%d %d",&point[i].first,&point[i].second);
}
sort(point,point+n,sortby);
double dist=0;
int temp,x,y;
for(int i=1;i<n;i++)
{
x=(point[i].first)-(point[i-1].first);
y=(point[i].second)-(point[i-1].second);
dist=dist+ sqrt((x*x) + (y*y));
//cout<<" distance b/w "<<point[i].first<<" "<<point[i].second<<" and "<<point[i-1].first<<" "<<point[i-1].second<<" = "<<sqrt((x*x) + (y*y))<<endl;
}
//cout<<endl;
printf("%.2f\n",dist);
t--;
}
return 0;
}
