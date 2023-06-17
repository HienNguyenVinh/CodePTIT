#include<bits/stdc++.h>

using namespace std;

void in(int *a, int *b, int n, vector<string> &vt, int k){
	int s = 0;
	string x = "[";
	for(int i=0; i<n; ++i){
		if(a[i] == 1){
			s+=b[i];
			x = x + to_string(b[i]) + " ";
		}
	}
	if(s == k){
		x.pop_back();
		x += "]";
		vt.push_back(x);
	}
}
void test(int *a, int *b, int n, vector<string> &vt, int k, int i){
	for(int j=1; j>=0; --j){
		a[i] = j;
		if(i==n-1){
			in(a,b,n,vt,k);
		}else{
			test(a,b,n,vt,k,i+1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n],b[n];
		for(int i=0; i<n; ++i){
			cin >> b[i];
		}
		sort(b,b+n);
		vector<string> vt;
		test(a,b,n,vt,k,0);
		int m = vt.size();
		if(m == 0){
			cout << -1 << endl;
		}else{
			for(string x : vt){
				cout << x << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
