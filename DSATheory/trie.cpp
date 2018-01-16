#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct node{
	char ch;
	bool eow;
	int prefixes;
	struct node *edge[26];
};

void addNode(node *root, char word[]){
	int len = strlen(word);
	for(int i=0;i<len;++i){
		if(root == NULL){
			root = new node;
		}
		root = root->edge[word[i]-'a'];

	}
}

void printNode(node *root){
	if(root == NULL){
		return;
	} else {
		for(int i=0;i<26;++i){
			printf("%c ", root->edge[i]);
			printNode(root->edge[i]);
		}
		printf("\n");
	}
}

int main(){
	struct node *root = new node;

	while(1){
		int choice;
		printf("Enter your choice: ");
		scanf("%d",&choice);

		if(choice == 1){
			printf("Enter the word: ");
			char data[10];
			scanf("%s",&data);
			addNode(root, data);
		} else if(choice == 2){
			printNode(root->right);
			printf("\n");
		}
	}

	return 0;
}
