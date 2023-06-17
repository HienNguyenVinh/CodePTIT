#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	pair <int, int> a[n];
	for(int i=0; i<n; ++i){
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a, a+n);
	int id = 100001, res = -1;
	for(int i=0; i<n-1; ++i){
		if(a[i].first == a[i+1].first && a[i].second < id){
			id = a[i].second;
			res = a[i].first;
		}
	}
	if(res == -1){
		cout << "NO";
	}else{
		cout << res;
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
