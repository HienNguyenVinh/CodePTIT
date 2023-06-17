#include<bits/stdc++.h>

using namespace std;

int m, n;
long long check(long long *a){
	stack <int> st;
	int l[n], r[n];
	for(int i=0; i<n; ++i){
		while(!st.empty() && a[st.top()] >= a[i]){
			st.pop();
		}
		if(st.empty()){
			l[i] = 0;
		}else{
			l[i] = st.top() + 1;
		}
		st.push(i);
	}
	while(!st.empty()){
		st.pop();
	}
	for(int i=n-1; i>=0; --i){
		while(!st.empty() && a[st.top()] >= a[i]){
			st.pop();
		}
		if(st.empty()){
			r[i] = n-1;
		}else{
			r[i] = st.top() - 1;
		}
		st.push(i);
	}
	long long tmp = 0;
	for(int i=0; i<n; ++i){
		tmp = max(tmp, (long long)(a[i] * (r[i] - l[i] + 1)));
	}
	return tmp;
}
void handle(){
	cin >> m >> n;
	long long a[n], b[n];
	for(int i=0; i<n; ++i){
		cin >> a[i];
		b[i] = m - a[i];
	}
	long long res = max(check(a), check(b));
	cout << res;
}
int main(){
	handle();
	return 0;
}
