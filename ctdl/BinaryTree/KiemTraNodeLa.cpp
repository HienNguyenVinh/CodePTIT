#include<bits/stdc++.h>

using namespace std;

int n, n1, n2;
char c;

struct Node{
	int data;
	Node *left, *right;
	
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void makeNode(Node *root){
	switch(c){
		case 'L':
			root->left = new Node(n2);
			break;
		case 'R':
			root->right = new Node(n2);
			break;
	}
}
void insert(Node *root){
	if(root == NULL){
		return;
	}
	if(root->data == n1){
		makeNode(root);
	}else{
		insert(root->left);
		insert(root->right);
	}
}
int countLeaf(Node *root){
	if(root == NULL){
		return 0;
	}
	if(root->left == NULL and root->right == NULL){
		return 1;
	}
	return countLeaf(root->left) + countLeaf(root->right);
}
void handle(){
	cin >> n;
	Node *root = NULL;
	while(n--){
		cin >> n1 >> n2 >> c;
		if(root == NULL){
			root = new Node(n1);
		}
		insert(root);
	}
	if(countLeaf(root->left) == countLeaf(root->right)){
		cout << "1";
	}else{
		cout << "0";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		handle();
		cout << endl;
	}
	return 0;
}
