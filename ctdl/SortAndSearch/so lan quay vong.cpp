#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	int a[n];
	int max = 0, ind;
	for(int i=0; i<n; ++i){
		cin >> a[i];
		if(max < a[i]){
			max = a[i];
			ind = i+1;
		}
	}
	cout << ind % n;
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
