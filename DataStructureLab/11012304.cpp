#include <iostream>
#include <cstdio>

using namespace std;

class Node{
	public:
		int data;
		Node *ptr;
		
		Node(){
			data = -1;
			ptr = NULL;
		}
		
		int pop(){
			int val = data;
			data = -1;

			return val;
		}
		
		Node* push(Node *top, Node *head, int val){
			Node *node = top;
			
			while(node->ptr!=head){
				node=node->ptr;
			}
			
			node->data = val;
			node->ptr = head;
			
			return node;
		}
		
		void printStack(Node *head){
			Node *node = head;
			
			cout<<node->data<<endl;
			
			while(node->ptr!=NULL){
				node = node->ptr;
				cout<<node->data<<endl;
			}
		}
		
		void printWholeStack(Node *top){
			Node *node = top;
			
			cout<<node->data<<endl;
			
			while(node->ptr!=NULL){
				node = node->ptr;
				cout<<node->data<<endl;
			}
		}
		
		Node* allocateMemory(Node *top, Node *head, int total_values){
			int count = 0;
			
			while(count<total_values){
				Node *node = new Node;
				node->ptr = top;
				top = node;
				++count;
			}
			
			return top;
		}
		
		Node* deallocateMemory(Node *top, Node *head, int total_values){
			int count = 0;
			Node *node = top;
			
			while(count<total_values){
				top = top->ptr;
				delete(node);
				node = top;
				++count;
			}
			
			return top;
		}
};

int main(){
	int val, total_values=0, choice, size = 0;
	Node *head;
	Node *top;
	Node temp;
	
	top = new Node;
	top->ptr = NULL;
	++size;
	
	cout<<"Enter the value of head: ";
	cin>>val;
	head = top;
	head->data = val;
	head->ptr = NULL;
	++total_values;
	
	cout<< "The value of current head is: " << head->data << endl;
	
	while(choice!=7){
		cout<<"\n1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Total Values in the stack\n";
		cout<<"4. Print the stack\n";
		cout<<"5. Size of stack\n";
		cout<<"6. Print the whole stack\n";
		cout<<"7. Quit\n\n";
		
		cout<<"Enter the choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:	{
						cout<<"Enter the value which you want to push: ";
						cin>>val;
				
						if(size>total_values){
							head = temp.push(top, head, val);
							++total_values;
						}
						else{
							top = temp.allocateMemory(top, head, total_values);
							size+=total_values;
							
							head = temp.push(top, head, val);
							++total_values;
						}
						break;
					}
			case 2:	{
						if(total_values>0){
							cout<<"The value of current head: "<< head->pop() <<endl;						
							head = head->ptr;
						
							--total_values;
							
							if(total_values == (size/2)){
								top = temp.deallocateMemory(top, head, total_values);
								size-=total_values;
							}
						}
						else{
							cout<<"The stack is currently empty."<<endl;
						}
						
						break;
					}
			case 3:	{
						cout<<"The total values in the stack is: "<<total_values<<endl;
						break;
					}
			case 4:	{
						if(total_values>0){
							cout<<"Printing the stack:\n";
							temp.printStack(head);
						}
						else{
							cout<<"Stack is empty\n";
						}
						break;
					}
			case 5: {
						cout<<"The size of the stack is: "<<size<<endl;
						break;
					}
			case 6:	{
						if(total_values>0){
							cout<<"Printing the whole stack:\n";
							temp.printStack(top);
						}
						else{
							cout<<"Stack is empty\n";
						}
						break;
					}
		}
	}
	
	cout<<head->data;
	
	return 0;
}