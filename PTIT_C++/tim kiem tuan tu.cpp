#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int *a = new int[n];
		int check = -1;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			
		}
		for(int i=0; i<n; ++i){
			if(a[i] == x){
				check = i+1;
				break;
			}
		}
		cout << check << endl;
	}
	return 0;
}
