#include<bits/stdc++.h>

using namespace std;

void handle(int n){
	long long res = 0;
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i=0; i<n; ++i){
		int x;
		cin >> x;
		pq.push(x);
	}
	while(pq.size() >= 2){
		int x = pq.top(); pq.pop();
		int y = pq.top(); pq.pop();
		res += x+y;
		pq.push(x+y);
	}
	cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		handle(n);
	}
	return 0;
}
