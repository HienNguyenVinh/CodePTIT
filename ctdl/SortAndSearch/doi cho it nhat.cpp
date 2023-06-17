#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		int min, cnt = 0;
		for(int i=0; i<n; ++i){
			int min = i;
			for(int j=i+1; j<n; ++j){
				if(a[min] > a[j]){
					min = j;
				}
			}
			if(a[i] > a[min]){
				swap(a[i],a[min]);
				++cnt;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

