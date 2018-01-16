#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

//function to read the matrix
void dfs::adjmatrix()
{
int a,b;
int i,j;
scanf("%d",&n);

for(i=0;i<n;++i)
{
	scanf("%d %d",&a,&b);
	adj[a][b]=1;
	adj[b][a]=1;
}




for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>adj[i][j];
for(i=1;i<=n;i++)
reach[i]=0;
}

//function to traverse the vertices in the graph
void dfs::dfsearch(int u,int &count)
{
reach[u]=1;
count++;
cout<<"\t"<<u;
for(int j=1;j<=n;j++)
{
if(adj[u][j]!=0)
{
if(!reach[j])
dfsearch(j,count);
}
}
}

//function to check whether the graph is connected or not
void dfs::dfsc()
{
int count=0;
dfsearch(1,count);
if(count==n)
cout<<endl<<"Graph is connected\n";
else
cout<<endl<<"Graph is not connected\n";
}

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
dfs d;
d.adjmatrix();
d.dfsc();
}
//getchar();

return 0;
}
