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
	switch (c){
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
void levelOrder(Node *root){
	queue <Node*> qu;
	qu.push(root);
	while(!qu.empty()){
		Node *p = qu.front();
		qu.pop();
		cout << p->data << " ";
		if(p->left != NULL){
			qu.push(p->left);
		}
		if(p->right != NULL){
			qu.push(p->right);
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
		}
		insert(root);
	}
	levelOrder(root);
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
