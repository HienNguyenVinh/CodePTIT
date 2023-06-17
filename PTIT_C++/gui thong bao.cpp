#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	for(int i=0; i<n; ++i){
		string s,a;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			if(a.size() + tmp.size() < 100){
				a += tmp;
				a += " ";
			}else{
				break;
			}
		}
		a = a.substr(0,a.size()-1);
		cout << a << endl;
	}
	return 0;
}
