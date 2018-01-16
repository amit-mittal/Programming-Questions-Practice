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

void insert(Node *root){
	Node *temp = root;
	while(temp->ptr!=NULL){
		temp = temp->ptr;
	}
	Node *newNode = new Node();
	newNode->data = 10;
	temp->ptr = newNode;
}

void print(Node *root){
	Node *temp = root->ptr;
	while(temp!=NULL){
		printf("%d\n", temp->data);
		temp = temp->ptr;
	}
}

int main(){
	Node *root = new Node();
	root->data = -1;

	printf("1st time\n");
	insert(root);
	print(root);

	printf("2nd time\n");
	insert(root);
	print(root);

	return 0;
}