#include<bits/stdc++.h>

using namespace std;

void in(string *st, string s, int n, int *a){
	for(int i=0; i<n; ++i){
		cout << st[a[i]] << " ";
	}
	cout << s;
	cout << endl;
}
void sinh(int *a, int n, int &ok){
	int i = n-2;
	while(i>=0 && a[i]>a[i+1]){
		--i;
	}
	if(i==-1){
		ok = 0;
	}else{
		int j = n-1;
		while(a[j] < a[i]){
			--j;
		}
		swap(a[i], a[j]);
		int l=i+1, r = n-1;
		while(l<=r){
			swap(a[l], a[r]);
			++l; --r;
		}
	}
}
void test(string *st, string s, int n){
	int a[n];
	for(int i=0; i<n; ++i){
		a[i] = i;
	}
	int ok = 1;
	while(ok){
		in(st, s, n, a);
		sinh(a, n, ok);
	}
}
int main(){
	int n;
	cin >> n;
	string s[n], a, st[n];	
	for(int i=0; i<n; ++i){
		cin >> s[i];
	}
	cin >> a;
	int cnt = 0;
	for(int i=0; i<n; ++i){
		if(s[i] != a){
			st[cnt++] = s[i];
		}
	}
	sort(st, st+cnt);
	test(st, a, cnt);
	return 0;
}
