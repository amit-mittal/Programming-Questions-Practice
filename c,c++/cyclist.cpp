// A C / C++ program for Dijkstra's single source shortest path algorithm.
// The program is for adjacency matrix representation of the graph
 
#include <stdio.h>
#include <limits.h>

using namespace std;
 
// Number of vertices in the graph
int V = 1;
 
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
double minDistance(double dist[], bool sptSet[])
{
	 // Initialize min value
	 double min = 0.0, min_index;
	 for (int v = 0; v < V; v++)
		 if (sptSet[v] == false && dist[v] >= min)
				 min = dist[v], min_index = v;
 
	 return min_index;
}
 
// A utility function to print the constructed distance array
int printSolution(double dist[], int n)
{
	 printf("Vertex   Distance from Source\n");
	 for (int i = 0; i < V; i++)
			printf("%d \t\t %lf\n", i, dist[i]);
}
 
// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(double graph[V][V], int src)
{
		 double dist[V];     // The output array.  dist[i] will hold the shortest
											// distance from src to i
 
		 bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
										 // path tree or shortest distance from src to i is finalized
 
		 // Initialize all distances as INFINITE and stpSet[] as false
		 for (int i = 0; i < V; i++)
				dist[i] = INT_MAX, sptSet[i] = false;
 
		 // Distance of source vertex from itself is always 0
		 dist[src] = 0;
 
		 // Find shortest path for all vertices
		 for (int count = 0; count < V-1; count++)
		 {
			 // Pick the minimum distance vertex from the set of vertices not
			 // yet processed. u is always equal to src in first iteration.
			 double u = minDistance(dist, sptSet);
 
			 // Mark the picked vertex as processed
			 sptSet[u] = true;
 
			 // Update dist value of the adjacent vertices of the picked vertex.
			 for (int v = 0; v < V; v++)
 
				 // Update dist[v] only if is not in sptSet, there is an edge from
				 // u to v, and total weight of path from src to  v through u is
				 // smaller than current value of dist[v]
				 if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && graph[u][v] < dist[v])
						dist[v] = min(dist[v], graph[u][v]);
		 }
 
		 // print the constructed distance array
		 printSolution(dist, V);
}
 
// driver program to test above function
int main()
{
	int test;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &V);
		int x, y;
		double val;
		double **graph;
		
		graph = new double*[V];
		for(int i=0;i<V;++i){
			graph[i] = new double[V];
		}

		while(1){
			scanf("%d %d %lf", x, y, val)
			graph[x-1][y-1] = val;
		}
		dijkstra(graph, 0);
	}
 
	return 0;
}