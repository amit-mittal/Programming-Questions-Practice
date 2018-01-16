#include<iostream>
#include<stdio.h>
#define s(n) scanf("%d",&n)

#define INFINITY 1000000000
 
using namespace std;
 
class Dijkstra{
    private:
        int adjMatrix[1005][1005];
        int predecessor[1005],distance[1005];
        bool mark[1005]; //keep track of visited node
        int source;
        int numOfVertices;
        int numOfEdges;
    public:
        void read();
        void initialize();
        int getClosestUnmarkedNode();
        void calculateDistance();
        void output();
};
 
 
void Dijkstra::read(){
    cin>>numOfVertices;
    cin>>numOfEdges;

    int x,y;

    for(int i=0; i<numOfVertices; i++){
        for(int j=0; j<numOfVertices; j++){
            adjMatrix[i][j]=0;
        }
    }
    for(int i=1;i<=numOfEdges;i++){
        s(x); s(y);
        adjMatrix[x-1][y-1]=1;
    }
    for(int i=0; i<numOfVertices; i++){
        int prev_ones=0;
        for(int j=0; j<numOfVertices; j++){
            if(i==j){
                adjMatrix[i][j]=0;
                continue;
            }
            if(adjMatrix[i][j]==0){
                adjMatrix[i][j]=INFINITY;
                continue;
            }
            adjMatrix[i][j]=prev_ones++;
        }
    }
   
    source=0;
    
}
 
 
void Dijkstra::initialize(){
    for(int i=0;i<numOfVertices;i++) {
        mark[i] = false;
        predecessor[i] = -1;
        distance[i] = INFINITY;
    }
    distance[source]= 0;
}
 
 
int Dijkstra::getClosestUnmarkedNode(){
    int minDistance = INFINITY;
    int closestUnmarkedNode;
    for(int i=0;i<numOfVertices;i++) {
        if((!mark[i]) && ( minDistance >= distance[i])) {
            minDistance = distance[i];
            closestUnmarkedNode = i;
        }
    }
    return closestUnmarkedNode;
}
 
 
void Dijkstra::calculateDistance(){
    initialize();
    int minDistance = INFINITY;
    int closestUnmarkedNode;
    int count = 0;
    while(count < numOfVertices) {
        closestUnmarkedNode = getClosestUnmarkedNode();
        mark[closestUnmarkedNode] = true;
        for(int i=0;i<numOfVertices;i++) {
            if((!mark[i]) && (adjMatrix[closestUnmarkedNode][i]<INFINITY) ) {
                if(distance[i] > distance[closestUnmarkedNode]+adjMatrix[closestUnmarkedNode][i]) {
                    distance[i] = distance[closestUnmarkedNode]+adjMatrix[closestUnmarkedNode][i];
                    predecessor[i] = closestUnmarkedNode;
                }
            }
        }
        count++;
    }
}
 
 
 
void Dijkstra::output(){
    if(distance[numOfVertices-1]==INFINITY)
        printf("-1\n");
    else
        printf("%d\n", distance[numOfVertices-1]);

/*    for(int i=0;i<numOfVertices;++i){
        for(int j=0;j<numOfVertices;++j){
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<numOfVertices;++i)
        printf("%d ", distance[i]);*/
}
 
 
int main(){
    int test;
    Dijkstra G;
    s(test);
    while(test--){
        G.read();
        G.calculateDistance();
        G.output();
    }
    return 0;
}