#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

//function to traverse the vertices in the graph
int dfsearch(int adj[][1001],int reach[],int u,int &count,int a,int b,int y)
{

	if((reach[a]==1)&&(reach[b]==1))
	{
		return 0;
	}
		
	reach[u]=1;
	count++;
	
	for(int j=0;j<u;j++)
	{
		if(adj[u][j]!=0)
		{
			if(!reach[j])
				dfsearch(adj,reach,j,count,a,b,y);
		}
	}
}

int main()
{
	int test,i,m,a,b,n,t,count,y;

	scanf("%d",&test);
	
	while(test--)
	{
		count=0;
		int adj[1001][1001]={0};
		int reach[1001]={0};
		
		scanf("%d %d",&n,&m);
		
		for(i=0;i<m;++i)
		{
			scanf("%d %d",&a,&b);
			adj[a][b]=1;
			adj[b][a]=1;
		}
		
		scanf("%d",&t);
		
		while(t--)
		{
			scanf("%d %d",&a,&b);
			dfsearch(adj,reach,m,count,a,b,0);
			
			if(reach[a]==1&&reach[b]==1)
				printf("YO\n",count);
			else
				printf("NO\n",count);
		}
	}

	return 0;
}
