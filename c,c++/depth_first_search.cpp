#include<iostream>
#include<cstdlib>
#include<cstdio>

const int MAX=15;

using namespace std;

class dfs
{
int adj[MAX][MAX];
int reach[MAX];
int n;
public:
void dfsearch(int,int &);
void adjmatrix();
void dfsc();
};

//function to read the matrix
void dfs::adjmatrix()
{
cout<<"Enter the vertices"<<endl;
cin>>n;
cout<<"Enter the adjacency matrix"<<endl;

int i,j;

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
dfs d;
cout<<"Depth first search"<<endl;
d.adjmatrix();
d.dfsc();
getchar();

return 0;
}
