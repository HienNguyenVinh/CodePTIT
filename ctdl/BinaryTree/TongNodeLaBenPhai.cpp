#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node *left, *right;
	
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

int n, n1, n2;
char c;

void makeNode(Node *root, int n2){
	if(c == 'L'){
		root->left = new Node(n2);
	}else{
		root->right = new Node(n2);
	}
}
void insert(Node *root){
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
bool isLeaf(Node *root){
	return (root != NULL and root->left == NULL and root->right == NULL);
}
int sumLeafRight(Node *root){
	if(root == NULL){
		return 0;
	}
	int res = 0;
	if(isLeaf(root->right)){
		res += root->right->data;
	}
	res += sumLeafRight(root->left) + sumLeafRight(root->right);
	return res;
}
void handle(){
	cin >> n;
	Node *root = NULL;
	while(n--){
		cin >> n1 >> n2 >> c;
		if(root == NULL){
			root = new Node(n1);
			makeNode(root, n2);
		}else{
			insert(root);
		}
	}
	cout << sumLeafRight(root);
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
