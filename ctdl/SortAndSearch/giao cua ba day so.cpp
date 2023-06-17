#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n, m, k;
	cin >> n >> m >> k;
	vector <long long> a(n), b(m), c(k);
	for(long long &x:a){
		cin >> x;
	}
	for(long long &x:b){
		cin >> x;
	}
	for(long long &x:c){
		cin >> x;
	}
	vector <long long> res;
	int x = 0, y = 0, z = 0;
	while(x < n && y < m && z < k){
		if(a[x] == b[y] && a[x] == c[z]){
			res.push_back(a[x]);
			++x; ++y; ++z;
		}else{
			if(a[x] < b[y]) {
				++x;
			}else if(b[y] < c[z]){
				++y;
			}else{
				++z;
			}
		}
	}
	if(res.size() == 0){
		cout << -1;
	}else{
		for(auto i:res){
			cout << i << " ";
		}
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
