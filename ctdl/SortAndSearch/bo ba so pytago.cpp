#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	vector <long long> a(n);
	for(auto &x:a){
		cin >> x;
	}
	sort(a.begin(), a.end());
	for(int i=0; i<n-1; ++i){
		for(int j=i+1; j<n; ++j){
			long long tmp = a[i]*a[i] + a[j]*a[j];
			long long t = sqrt(tmp);
			if(t * t == tmp && binary_search(a.begin()+j+1, a.end(), t)){
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
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
