#include <iostream>
#include <cstdio>

using namespace std;

class Node{
	public:
		int data;
		Node *ptr;

		Node(){
			data = 0;
			ptr = NULL;
		}

		void getInput(){
			printf("Enter the data: ");
			scanf("%d",&data);
		}

		void print(){
			printf("The data is: %d\n", data);
		}

		void insertNodeBack(Node **head){
			Node *temp = (*head)->ptr;
			Node *newNode = new Node;

			newNode->getInput();
			if((*head)->ptr==NULL){//empty linked list
				(*head)->ptr = newNode;
				newNode->ptr = NULL;
				printf("New node inserted at the back successfully\n");
				return;
			}

			while(temp->ptr!=NULL){
				temp = temp->ptr;
			}
			temp->ptr = newNode;
			newNode->ptr = NULL;
			printf("New node inserted at the back successfully\n");
		}

		void insertNodeStart(Node **head){
			Node *temp = (*head)->ptr;
			Node *newNode = new Node;

			newNode->getInput();
			newNode->ptr = temp;
			(*head)->ptr = newNode;
			
			printf("New node inserted in the starting successfully\n");
		}

		void deleteNode(Node **head, int value){
			Node *temp = (*head)->ptr;
			Node *prev = (*head);
			while(temp!=NULL){
				if(temp->data == value){
					prev->ptr = temp->ptr;
					printf("Value deleted successfully\n");
					delete temp;
					return;
				}
				temp = temp->ptr;
				prev = prev->ptr;
			}
			printf("Value not found\n");
		}

		void updateNode(Node *head, int value){
			int newValue;
			Node *temp = head->ptr;
			while(temp!=NULL){
				if(temp->data == value){
					printf("Enter the new value: ");
					scanf("%d",&newValue);
					temp->data = newValue;
					return;
				}
				temp = temp->ptr;
			}
			printf("Value not found\n");
		}

		void printList(Node *head){
			head = head->ptr;
			while(head!=NULL){
				head->print();
				head = head->ptr;
			}
		}
};

int main(){
	int choice;
	Node *head = new Node;
	Node temp;

	while(1){
		printf("\nEnter your choice\n1.Insert new node at the end\n2.Insert new node in the starting\n\
3.Delete a node\n4.Update a node\n5.Print the list\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		printf("\n");

		switch(choice){
			case 1:
				temp.insertNodeBack(&head);
				break;
			case 2:
				temp.insertNodeStart(&head);
				break;
			case 3:
				int val;
				printf("Enter the value to delete: ");
				scanf("%d",&val);
				temp.deleteNode(&head, val);
				break;
			case 4:
				int value;
				printf("Enter the value to update: ");
				scanf("%d",&value);
				temp.updateNode(head, value);
				break;
			case 5:
				temp.printList(head);
				break;
		}
	}

	return 0;
}