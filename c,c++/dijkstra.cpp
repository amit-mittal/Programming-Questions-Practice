
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
const int MAX=10;
const int noedge=999;
using namespace std;
class dijkstra
{
int n,v,cost[MAX][MAX],s[MAX],d[MAX];
public:
void costmatrix();
void print();
int choose();
void sspath();
};
//reads the cost adjacency matrix
void dijkstra::costmatrix()
{
cout<<"\nEnter the no. of vertices:";
cin>>n;
cout<<"\nEnter the cost adjacency matrix";

int i,j;

for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>cost[i][j];
}

void dijkstra::sspath()
{
int i,u,w;
cout<<"\nEnter the source vertex:";
cin>>v;
for(i=1;i<=n;i++)
{
s[i]=0;
d[i]=cost[v][i];
}
s[v]=1;
d[v]=0;
i=2;


while(i<n)
{
u=choose();
s[u]=1;
i++;
for(w=1;w<=n;w++)
{
if(((d[u]+cost[u][w])<d[w]) && !s[w])
d[w]=d[u]+cost[u][w];
}
}
}

int dijkstra::choose()
{
int w,j,min;
min=noedge;
for(j=1;j<=n;j++)
{
if(d[j]<min && !s[j])
{
min=d[j];
w=j;
}
}
return w;
}

void dijkstra::print()
{
cout<<"\nThe shortest path with the cost is:"<<endl;
for(int i=1;i<=n;i++)
if(i!=v)
cout<<"\n<"<<v<<">---<"<<i<<">--->"<<d[i];
}

void main()
{
dijkstra d;
d.costmatrix();
d.sspath();
d.print();
cout<<endl;
}
