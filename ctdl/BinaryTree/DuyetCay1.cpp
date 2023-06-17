#include<bits/stdc++.h>

using namespace std;

int n;
vector <int> In, Pre;

int search(int l, int r, int x){
	for(int i=l; i<=r; ++i){
		if(In[i] == x){
			return i;
		}
	}
	return -1;
}
void Postorder(int &index, int l, int r){
	if(l == r){
		cout << In[l] << " ";
		return;
	}else{
		int x = search(l, r, Pre[index]);
		if(x > l){
			Postorder(++index, l, x-1);
		}
		if(x < r){
			Postorder(++index, x+1, r);
		}
		cout << In[x] << " ";
	}
}
void handle(){
	cin >> n;
	In.resize(n);
	Pre.resize(n);
	for(int &i:In){
		cin >> i;
	}
	for(int &i:Pre){
		cin >> i;
	}
	int index = 0;
	Postorder(index, 0, n-1);
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
