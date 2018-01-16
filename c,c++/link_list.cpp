#include<iostream>
#include<cstdio>
#include<stdlib.h>

//this is front addition

using namespace std;

typedef struct node_type
{
	int data;
	node_type *next;
}node;

int main()
{
	typedef node *list;
	list home,temp;
	int dat,count=0;

	home=NULL;

	while(count<5)
	{
		cin>>dat;

		temp=(list)malloc(sizeof(node));
	
		temp->data=dat;
		temp->next=home;
		home=temp;
		
		count++;
	}
	temp=home;

	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}

	return 0;
}
