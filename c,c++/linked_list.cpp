#include<iostream>

using namespace std;

class node
{
public:
	int info;
	node *next;
	node(int val,node *ptr=NULL)
	{
		info=val;
		next=ptr;
	}
};

class list
{
private:
	node *head,*tail;
public:
	list()
	{
		head=tail=0;
	}

//	~list();

	int isempty()
	{
		return head==0;
	}
	void addtohead(int);
	void addtotail(int);
	int deletefromhead();
	int deletefromtail();
	void deletenode(int);
	bool isinlist(int);
};

/*list::~list()
{
	for(node *n;!isempty();)
	{
	n=head->next;
	delete head;
	head=n;	
	}
}*/

void list::addtohead(int val)
{
	head=new node(val,head);
	if (tail==0)
		tail=head;
}

void list::addtotail(int val)
{
	if(tail!=0)
	{
		tail->next=new node(val);
		tail=tail->next;
	}
	else
		head=tail=new node(val);
}

int list::deletefromhead()
{
	int val=head->info;
	if(head==tail)
		head=tail=0;
	else
	{
		node *tmp;
		tmp=head;
		head=head->next;
		delete tmp;
	}
	return val;
}

int list::deletefromtail()
{
	int val=tail->info;
	if(head==tail)
		head=tail=0;
	else
	{
		node *tmp;
		for(tmp=head;tmp->next!=NULL;tmp=tmp->next);
		delete tail;
		tail=tmp;
		tail->next=0;
	}
	return val;
}

void list::deletenode(int val)
{
	if(head==tail)
		head=tail=0;
	else
	{
		if((head->info==val)&&(head!=tail))
		{
			node *tmp=head;
			head=head->next;
			delete tmp;
		}
		else if((val==head->info)&&(head==tail))
		{
			delete head;
			head=tail=0;
		}
		else
		{
			node *tmp;
			for(tmp=head;(tmp!=NULL)&&(tmp->next->info!=val);tmp=tmp->next);
			if(tmp!=0)
			{
				tmp->next=tmp->next->next;
			}
		}
	}
}

int main()
{
	node *n;
	list list;
}
