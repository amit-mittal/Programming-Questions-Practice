#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

//function to traverse the vertices in the graph
int dfsearch(int adj[][1001],int reach[],int u,int &count)
{		
	reach[u]=1;
	count++;
	
	for(int j=0;j<u;j++)
	{
		if(adj[u][j]!=0)
		{
			if(!reach[j])
				dfsearch(adj,reach,j,count);
		}
	}
}

int main()
{
	int test,ax,bx,i,m,n,t,count,y;
	char a[2],b[2];	
	
		count=0;
		int adj[1001][1001]={0};
		int reach[1001]={0};
		
		scanf("%d %d",&n,&m);
		
		for(i=0;i<m;++i)
		{
			scanf("%s %s",a,b);
			ax=a[0]-64;
			bx=b[0]-64;
			adj[ax][bx]=1;
			adj[bx][ax]=1;
//			printf("%s %s\n",a,b);
		}
		
		dfsearch(adj,reach,m,count);
			
		if(count==n)
			printf("%d\n",count-2);
		else
			printf("DISCONNECTED\n");
			
	return 0;
}
