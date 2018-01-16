#include<iostream>
#include<stdio.h>
#include<stdlib.h>

//tail addition

using namespace std;

typedef struct node_type
{
	int data;
	node_type *next;
}node; 

int main()
{
	typedef node *list;
	list head,tail,temp;

	int dat,count=0;

	tail=head=NULL;
	cin>>dat;

	head=tail=(list)malloc(sizeof(node));

	head->data=dat;
	tail=head;

	while(count<4)
	{
		cin>>dat;

		tail->next=(list)malloc(sizeof(node));

		tail->next->data=dat;
		tail->next->next=NULL;
		tail=tail->next;

		count++;
	}
	temp=head;

	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}

	return 0;
}
