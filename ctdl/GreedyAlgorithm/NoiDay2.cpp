#include<bits/stdc++.h>

using namespace std;

int n;
const int tmp = 1e9 + 7;

void handle(){
	cin >> n;
	long long res = 0;
	priority_queue <long long, vector<long long>, greater<long long>> pq;
	for(int i=0; i<n; ++i){
		long long x; 
		cin >> x;
		pq.push(x);
	}
	while(pq.size() >= 2){
		long long x = pq.top();
		pq.pop();
		long long y = pq.top();
		pq.pop();
		long long c = (x + y) % tmp;
		res = (res + c) % tmp;
		pq.push(c);
	}
	cout << res;
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
