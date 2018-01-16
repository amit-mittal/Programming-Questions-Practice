#include <iostream>
#include <cstdio>

using namespace std;

struct node{
	int data;
	struct node* ptr;
};

void addNode(struct node* root){
	struct node* temp = root;
	while(temp->ptr!=NULL){
		temp = temp->ptr;
	}
	struct node *n = new node();
	temp->ptr = n;
	n->data = 12;
	n->ptr = NULL;
}

void printNode(struct node* root){
	struct node* temp = root;
	while(temp->ptr!=NULL){
		temp = temp->ptr;
		printf("%d\n", temp->data);
	}
}

void modify(struct node* root){
	struct node* temp = root->ptr;
	
	temp->data = 15;
	temp->ptr = NULL;
}

int main(){
	struct node* root = new node;

	addNode(root);addNode(root);
	printNode(root);
	printf("\n");
	
	addNode(root);
	printNode(root);
	printf("\n");
	
	
	root = root->ptr;
	printNode(root);
	printf("\n");

	modify(root);
	printNode(root);

	return 0;
}
