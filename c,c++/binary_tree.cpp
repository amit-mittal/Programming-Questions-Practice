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

	while(count<1)
	{
		cin>>dat;
				
		if(dat>temp->data)
		{
			temp->right=(list)malloc(sizeof(node));
			temp->right->data=dat;
			temp->right->left=temp->right->right=NULL;
		}
		else
		{
			temp->left=(list)malloc(sizeof(node));
			temp->left->data=dat;
			temp->left->left=temp->right->right=NULL;
		}

		++count;
	}
	temp=root;

	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->right;
	}

	return 0;
}
