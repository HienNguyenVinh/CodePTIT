#include<bits/stdc++.h>

using namespace std;

set <string> s;
void check(int *b, int n){
	string m = "";
	for(int i=0; i<n; ++i){
		m = m + to_string(b[i]) + " ";
	}
	s.insert(m);
}
void test(int *a, int n, int start, int len, int *b){
	if(len > 1){
		bool is_incre = true;
		for(int i=0; i<len-1; ++i){
			if(b[i]>b[i+1]){
				is_incre = false;
				break;
			}
		}
		if(is_incre){
			check(b,len);
		}
	}
	if(len == n || start == n){
		return;
	}
	b[len] = a[start];
	test(a, n, start+1, len+1, b);
	test(a, n, start+1, len, b);
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i){
		cin >> a[i];
	}
	int b[n];
	test(a,n,0,0,b);
	for(string x:s){
		cout << x << endl;
	}
	return 0;
}

