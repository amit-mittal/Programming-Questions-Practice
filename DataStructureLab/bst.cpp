#include <iostream>
#include <cstdio>

using namespace std;

class node{
	public:
		int data;
		struct node* parent;
		struct node* left;
		struct node* right;

		node(){
			parent = NULL;
			left = NULL;
			right = NULL;
		}
};

node* findMax(node *root){
	while(root->right!=NULL){
		root = root->right;
	}
	return root;
}

void insertNode(node **root, int val){
	if((*root)->right==NULL){
		node *newNode = new node();
		newNode->data = val;
		newNode->parent = (*root);
		(*root)->right = newNode;
		return;
	}

	node *prev = (*root)->right;
	node *temp = (*root)->right;
	node *newNode = new node();
	newNode->data = val;

	while(temp!=NULL){
		prev = temp;
		if(val<temp->data)
			temp = temp->left;
		else
			temp = temp->right;
	}

	if(val < prev->data){
		prev->left = newNode;
		newNode->parent = prev;
	}else{
		prev->right = newNode;
		newNode->parent = prev;
	}
}

void deleteNode(node **root, int val){
	if((*root)->right->data == val){
		
		return;
	}

	node *prev = (*root)->right;
	node *temp = (*root)->right;
	
	while(temp!=NULL && temp->data!=val){
		prev = temp;
		if(val<temp->data)
			temp = temp->left;
		else
			temp = temp->right;
	}

	if(temp==NULL){
		printf("Value not found\n");
		return;
	}

	if(temp->left==NULL && temp->right==NULL){
		if(prev->left->data == val){
			prev->left = NULL;
		}
		else if(prev->left->data == val){
			prev->right = NULL;
		}
		delete(temp);
		return;
	}

	if((temp->left==NULL && temp->right!=NULL) || (temp->left!=NULL && temp->right==NULL)){
		if(temp->left!=NULL){
			temp->data = temp->left->val;
			delete(temp->left);
			temp->left = NULL;
		}
		else if(temp->right!=NULL){
			temp->data = temp->right->val;
			delete(temp->right);
			temp->right = NULL;
		}
		return;
	}

	node *max = findMax(prev);
	temp->data = max->data;
	max->parent->right = NULL;
	delete(max);
}

void search(node *root, int val){
	if(root == NULL){
		printf("Value not found: %d\n", val);
		return;
	}

	if(root->data == val){
		printf("Value found: %d\n", val);
	}
	else if(val<root->data){
		printf("going left\n");
		search(root->left, val);
	}
	else{
		printf("going right\n");
		search(root->right, val);
	}
}

void print(node *root){
	if(root==NULL)
		return;

	printf("left of root %d\n", root->data);
	print(root->left);
	printf("root %d\n", root->data);
	printf("right of root %d\n", root->data);
	print(root->right);
}

int main(){
	int choice;
	node *root = new node();
	root->data = -1;
	
	while(1){
		printf("\nChoices available:\n1. Insert Node\n");
		printf("2. Delete Node\n3. Print tree\n4. Search");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				{
					int val;
					printf("Enter value which you want to insert: ");
					scanf("%d",&val);
					insertNode(&root, val);
					break;
				}
			case 2:
				{
					int val;
					printf("Enter value which you want to delete: ");
					scanf("%d",&val);
					deleteNode(&root, val);
					break;
				}
			case 3:
				{
					printf("Printing the whole tree:\n");
					print(root->right);
					break;
				}
			case 4:
				{
					int val;
					printf("Enter value which you want to search: ");
					scanf("%d",&val);
					search(root->right, val);
					break;
				}
		};
	}

	return 0;
}