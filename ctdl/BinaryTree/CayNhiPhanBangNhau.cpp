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
int identicalTrees(Node *root_1, Node *root_2){
	if(root_1 == NULL and root_2 == NULL){
		return 1;
	}
	if(root_1 != NULL and root_2 != NULL){
		if(root_1->data != root_2->data){
			return 0;
		}
		return (identicalTrees(root_1->left, root_2->left) and identicalTrees(root_1->right, root_2->right));
	}
	return 0;
}
void handle(){
	Node *root_1 = NULL;
	Node *root_2 = NULL;
	cin >> n;
	while(n--){
		cin >> n1 >> n2 >> c;
		if(root_1 == NULL){
			root_1 = new Node(n1);
			makeNode(root_1, n2);
		}else{
			insert(root_1);
		}
	}
	
	cin >> n;
	while(n--){
		cin >> n1 >> n2 >> c;
		if(root_2 == NULL){
			root_2 = new Node(n1);
			makeNode(root_2, n2);
		}else{
			insert(root_2);
		}
		
	}
	cout << identicalTrees(root_1, root_2);
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
