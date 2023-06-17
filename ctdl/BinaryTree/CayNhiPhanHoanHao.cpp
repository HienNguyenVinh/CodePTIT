#include<bits/stdc++.h>

using namespace std;

int n, n1, n2;
char c;
bool ok;

struct Node{
	int data;
	Node *left, *right;
	
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void makeNode(Node *root, int data){
	switch(c){
		case 'L':
			root->left = new Node(data);
			break;
		case 'R':
			root->right = new Node(data);
			break;
	}
}
void insert(Node* root){
	if(root == NULL){
		return;
	}
	if(root->data == n1){
		makeNode(root, n2);
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
	if(not(root->left != NULL and root->right != NULL)){
		ok = false;
		return 0;
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
	ok = true;
	int cntL = countLeaf(root->left);
	int cntR = countLeaf(root->right);
	if(ok and cntL == cntR){
		cout << "Yes";
	}else{
		cout << "No";
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
