#include <iostream>
#include <cstdio>

using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
	struct node *parent;
};

void addNode(struct node *root, int data){
	struct node* prev = root;
	struct node* temp = root->right;
	while(temp!=NULL){
		prev = temp;
		if(data > temp->data)
			temp = temp->right;
		else
			temp = temp->left;
	}

	struct node* newNode = new node;
	newNode->data = data;
	newNode->parent = prev;
	if(data > prev->data){
		prev->right = newNode;
	} else {
		prev->left = newNode;
	}
	printf("Node inserted successully\n");
}

void printNode(struct node* root){
	if(root == NULL)
		return;

	printNode(root->left);
	printf("%d ", root->data);
	printNode(root->right);
}

int main(){
	struct node *root = new node;
	root->data = -1234;

	while(1){
		int choice;
		printf("Enter your choice: ");
		scanf("%d",&choice);

		if(choice == 1){
			printf("Enter the value: ");
			int data;
			scanf("%d",&data);
			addNode(root, data);
		} else if(choice == 2){
			printNode(root->right);
			printf("\n");
		}
	}

	return 0;
}