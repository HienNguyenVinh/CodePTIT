//#include<bits/stdc++.h>
//
//using namespace std;
//
//void test(int *a, vector<string> &s, int n){
//		string x = "[";
//		for(int i=0; i<n-1; ++i){
//			x = x + to_string(a[i]) + " ";
//		}
//		x = x + to_string(a[n-1]) + "]";
//		s.push_back(x);
//		for(int i=0; i<n-1; ++i){
//			a[i] = a[i]+a[i+1];
//		}
//		if(n>1){
//			test(a,s,n-1);
//		}
//		
//}
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		int a[n];
//		for(int i=0; i<n; ++i){
//			cin >> a[i];
//		}
//		vector<string> s;
//		test(a,s,n);
//		for(int i=n-1; i>=0; --i){
//			cout << s[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}

#include <iostream> 
#include <vector> 
using namespace std; 

int main() { 
	int x; 
	cin >> x; 
	while (x--) { 
		int n; 
		cin >> n; 
		vector<int> v; 
		int temp; 
		for (int i = 1; i <= n; i++) { 
			cin >> temp; 
			v.push_back(temp); 
		} 
		string res = ""; 
		while (v.size() > 0) { 
			string tempString = "["; 
			for (int i = 0; i < v.size() - 1; i++) { 
				tempString += (to_string(v[i]) + " "); 
				v[i] += v[i + 1]; 
			} 
			tempString += (to_string(v[v.size() - 1])); 
			tempString += "] "; 
			res = tempString + res; 
			v.erase(v.begin() + v.size() - 1); 
		} 
		cout << res; 
		cout << endl; 
	} 
}
