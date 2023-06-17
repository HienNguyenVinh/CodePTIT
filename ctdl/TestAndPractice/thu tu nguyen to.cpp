#include<bits/stdc++.h>

using namespace std;

int n, k;
int cnt = 0;

bool isSnt(int cnt){
	if(cnt == 0 || cnt == 1){
		return false;
	}
	for(int i=2; i<=sqrt(cnt); ++i){
		if(cnt % i == 0){
			return false;
		}
	}
	return true;
}
void check(int *a){
	cout << cnt << ": ";
	for(int i=1; i<=k; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
}
void test(int *a, int i){
	for(int j=a[i-1]+1; j<=n-k+i; ++j){
		a[i] = j;
		if(i == k){
			++cnt;
			if(isSnt(cnt)){
				check(a);
			}
		}else{
			test(a, i+1);
		}
	}
}
void handle(){
	int a[k+1];
	a[0] = 0;
	test(a, 1);
}
int main(){
	cin >> n >> k;
	handle();
	return 0;
}
