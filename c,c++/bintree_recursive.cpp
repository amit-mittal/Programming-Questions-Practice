#include<iostream>
#include<stdio.h>
#include<stdlib.h>

//binary tree

using namespace std;

typedef struct node_type
{
	int data;
	node_type *left,*right;
}node;

void insert(node_type *root,int dat)
{
	typedef node *list;
	node_type *temp;
//	root=(list)malloc(sizeof(node));
	if(dat==root->data)
	{
		return;
	}
	else if(dat>root->data)
	{
		insert(root->right,dat);
		temp=root;
		temp->right=(list)malloc(sizeof(node));
		temp->right->data=dat;
		temp->right->left=temp->right->right=NULL;
	}
	else
	{
		insert(root->left,dat);
		temp=root;
		temp->left=(list)malloc(sizeof(node));
		temp->left->data=dat;
		temp->left->left=temp->right->right=NULL;
	}
}

int main()
{
	typedef node *list;
	list root,temp;

	int dat,count=0;

	cin>>dat;

	temp=root=(list)malloc(sizeof(node));
	root->data=dat;
	root->right=root->left=NULL;

	temp=root;

	cin>>dat;
	insert(root,dat);

/*	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->right;
	}
*/
	return 0;
}
