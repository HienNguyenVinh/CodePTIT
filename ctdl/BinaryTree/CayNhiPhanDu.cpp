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
int check(Node *root){
	queue <Node *> qu;
	qu.push(root);
	while(!qu.empty()){
		Node *r = qu.front();
		qu.pop();
		
		if(r->left != NULL){
			if(r->right == NULL){
				return 0;
			}
			qu.push(r->left);
		}
		if(r->right != NULL){
			if(r->left == NULL){
				return 0;
			}
			qu.push(r->right);
		}
	}
	return 1;
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
	cout << check(root);
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
