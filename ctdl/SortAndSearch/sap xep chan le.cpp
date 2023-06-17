#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int odd[n], even[n];
	int c1 = 0, c2 = 0;
	int x;
	for(int i=0; i<n; ++i){
		cin >> x;
		if(x % 2 == 0){
			even[c2++] = x;
		}else{
			odd[c1++] = x;
		}
	}
	sort(even, even+c2);
	sort(odd, odd+c1);
	int m = c2-1, y = 0;
	for(int i=0; i<n; ++i){
		if(i%2 == 0){
			cout << odd[m] << " ";
			--m;
		}else{
			cout << even[y] << " ";
			++y;
		}
	}
	return 0;
}
