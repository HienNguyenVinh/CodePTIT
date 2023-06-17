#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a,b;
		getline(cin,a);
		getline(cin,b);
		set <string> m,n;
		stringstream ss1(a);
		string tmp;
		while(ss1 >> tmp){
			m.insert(tmp);
		}
		stringstream ss2(b);
		while(ss2 >> tmp){
			n.insert(tmp);
		}
		for(string x:m){
			if(n.find(x) == n.end()){
				cout << x << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
