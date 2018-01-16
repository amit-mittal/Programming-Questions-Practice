#include<iostream>

using namespace std;

class bstnode
{
public:
	bstnode()
	{
		left=right=0;
	}
	bstnode(int val,bstnode *l=0,bstnode *r=0)
	{
		key=val;
		left=l;
		right=r;
	}
	int key;
	bstnode *left,*right;
};

class bst
{
public:
	bst()
	{
		root=0;
	}
	int* search(bstnode *p,int val);
	bstnode *root;
};

int* bst::search(bstnode *p,int val)
{
	while(p!=NULL)
	{
		if(p->key==val)
			return &p->key;
		else if(val<p->key)
			p=p->left;
		else
			p=p->right;
		return 0;
	}
}

int main()
{
	return 0;
}
