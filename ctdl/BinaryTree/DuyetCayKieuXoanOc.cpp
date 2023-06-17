#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node *left, *right;
	
	Node(int data){
		this->data = data;
		this->left = this->right = NULL;
	}
};

int n, n1, n2;
char c;

void makeNode(Node *root, int data){
	if(c == 'L'){
		root->left = new Node(data);
	}else{
		root->right = new Node(data);
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
void level_order(Node *root){
	if(root == NULL){
		return;
	}
	stack <Node *> st1, st2;
	st1.push(root);
	while(!st1.empty() || !st2.empty()){
		while(!st1.empty()){
			Node *x = st1.top();
			st1.pop();
			cout << x->data << " ";
			if(x->right != NULL){
				st2.push(x->right);
			} 
			if(x->left != NULL){
				st2.push(x->left);
			} 
		}
		while(!st2.empty()){
			Node *x = st2.top();
			st2.pop();
			cout << x->data << " ";
			if(x->left != NULL){
				st1.push(x->left);
			} 
			if(x->right != NULL){
				st1.push(x->right);
			} 
		}
	}
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
	level_order(root);
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
