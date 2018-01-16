#include <iostream>
#include <cstdio>

using namespace std;

class Node{
	public:
		int index;
		int data;
		Node *left;
		Node *right;

		Node(){
			index = 0;
			data = -1;
			left = NULL;
			right = NULL;
		}

		void getInput(){
			printf("Enter the data: ");
			scanf("%d",&data);
		}

		void print(){
			printf("The index is: %d\n", index);
			printf("The data is: %d\n", data);
			printf("\n");
		}

		void insertNode(Node **root, int counter){
			Node *newNode = new Node;
			newNode->index = counter;
			newNode->getInput();

			Node *temp = (*root)->right;
			Node *prev = (*root);
			while(temp!=NULL){
				printf("%d->", temp->data);
				prev = temp;
				if(newNode->data<=temp->data){
					temp = temp->left;
				}
				else{
					temp = temp->right;
				}
			}
			printf("\n");

			if(newNode->data <= prev->data){
				prev->left = newNode;
			}
			else{
				prev->right = newNode;
			}
			printf("Node inserted successfully\n");
		}

		void search(Node *root, int val){
			Node *temp = root->right;
			printf("Path along which value is searched\n");
			while(temp!=NULL){
				printf("%d ", temp->data);
				if(val<temp->data){
					temp = temp->left;
					printf("left ");
				}
				else if(val>temp->data){
					temp = temp->right;
					printf("right ");
				}
				else{
					printf("Value encountered\n");
					return;
				}
			}
			printf("Value is not found\n");
		}

		void deleteNode(Node **root, int val){
			Node *temp = (*root)->right;
			Node *prev = (*root);
			while(temp!=NULL){
				prev = temp;
				if(val<temp->data){
					temp = temp->left;
				}
				else if(val>temp->data){
					temp = temp->right;
				}
				else{
					printf("Value encountered\n");
					if(temp->left!=NULL && temp->right==NULL){

					}
					else if(temp->left==NULL && temp->right!=NULL){

					}
					else if(temp->left!=NULL && temp->right==NULL){

					}
					else{
						delete temp;
						prev ;//incomplete code
					}
					return;
				}
			}
			printf("Value is not found\n");
		}

		void printTree(Node *root){
			if(root==NULL)
				return;
			printTree(root->left);
			root->print();
			printTree(root->right);
		}
};

int main(){
	int count = 0;//to maintain index
	Node *root = new Node;
	Node temp;
	int choice, val;

	while(1){
		printf("\nChoices Available\n1.Insert new node\n2.Search data starting from root\n\
3.Delete a node\n4.Update a node\n5.Print the tree(inorder)\n6.Find path between two indices\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		printf("\n");

		switch(choice){
			case 1:
				++count;
				temp.insertNode(&root, count);//root's right contains the tree
				break;
			case 2:
				printf("Enter the value to be searched: ");
				scanf("%d", &val);
				temp.search(root, val);
				break;
			case 3:
				printf("Enter the value to be deleted: ");
				scanf("%d",&val);
				temp.deleteNode(&root, val);
				break;
			case 4:
				printf("Updating is similar as searching the value\n");
				break;
			case 5:
				temp.printTree(root);
				break;
			case 6:
				break;
			default:
				break;
		}
	}

	return 0;
}