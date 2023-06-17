#include <bits/stdc++.h> 

using namespace std; 

using ll = long long; 
ll a[1000001]; 
int main() { 
	int t; 
	cin >> t; 
	while (t--) { 
		int n; 
		cin >> n; 
		multiset<int> mset; 
		for (int i = 0; i < n; i++) { 
			cin >> a[i]; 
			mset.insert(a[i]); 
		} 
		for (int i = 0; i < n; i++) { 
			if (mset.find(i) != mset.end()) { 
				cout << i << " "; } 
			else { 
				cout << "-1 "; 
			} 
		} 
		cout << endl; 
	} 
return 0; 
}
