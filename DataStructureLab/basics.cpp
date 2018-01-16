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

void func1(Node *node){
	node->data = 5;
	Node *temp = node;
	temp->ptr = temp;
	temp->data = 1;

	Node *n = new Node();
	n->data = 100;
	temp->ptr = n;
}


void func2(Node **node){
	printf("%d\n", (*node)->data);
}

int main(){
	Node *root = new Node();
	root->data = 10;

	Node *next = new Node();
	next->data = 15;
	root->ptr = next;

	func1(root);

	printf("%d\n", root->data);
	printf("%d\n", next->data);
	printf("%d\n", root->ptr->data);

	func2(&root);
	return 0;
}