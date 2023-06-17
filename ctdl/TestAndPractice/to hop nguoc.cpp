#include<bits/stdc++.h>

using namespace std;

void init(int *a, int k){
	for(int i=1; i<=k; ++i){
		a[i] = i;
	}
}
void sinh(int *a, int n, int k, int &ok){
	int i = k;
	while(i>=0 && a[i] == n-k+i){
		--i;
	}
	if(i==0){
		ok = 0;
	}else{
		++a[i];
		for(int j=i+1; j<=n; ++j){
			a[j] = a[i]+j-i;
		}
	}
}
bool cmp(string a, string b){
	return a > b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n+1], ok=1;
		init(a,k);
		vector <string> s;
		while(ok){
			string tmp = "";
			for(int i=1; i<=k; ++i){
				tmp += to_string(a[i]) + " ";
			}
			s.push_back(tmp);
			sinh(a,n,k,ok);
		}
		sort(s.begin(), s.end(), cmp);
		for(string x:s){
			cout << x << endl;
		}
	}
	return 0;
}
