#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)

using namespace std;

class Node{
	public:
		int data;
		Node *ptr;

	Node(){
		ptr = NULL;
	}
};

void insertNode(Node *root, int val){
	Node *newNode = new Node();
	newNode->data = val;

	Node *temp = root;
	while(temp->ptr!=NULL){
		temp = temp->ptr;
	}
	temp->ptr = newNode;
}

void print(Node *root){
	Node *temp = root->ptr;
	while(temp!=NULL){
		printf("%d ", temp->data);
		temp = temp->ptr;
	}
	printf("\n");
}

void dfs(Node **arr, int start, int *visit){
	printf("%d\n", start);
	visit[start] = 1;
	Node *temp = arr[start]->ptr;
	while(temp!=NULL){
		if(visit[temp->data]==0){
			dfs(arr, temp->data, visit);
		}
		temp = temp->ptr;
	}
}

int main(){
	int v, e, x, y;
	Node **arr;
	int *visit;

	printf("Vertices: ");
	s(v);
	printf("Edges: ");
	s(e);

	arr = new Node*[v+1];
	for(int i=0;i<=v;++i)
		arr[i] = new Node();
	visit = new int[v+1];

	for(int i=0;i<e;++i){
		printf("Start End: ");
		s(x),s(y);
		insertNode(arr[x],y);
		insertNode(arr[y],x);

		for(int j=0;j<=v;++j){
			printf("List %d: ", j);
			print(arr[j]);
		}
	}

	for(int i=0;i<=v;++i)
		visit[i] = 0;

	printf("DFS:\n");
	dfs(arr, 0, visit);

	return 0;
}