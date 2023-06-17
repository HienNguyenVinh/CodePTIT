#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string date;
		cin >> n >> date;
		stringstream ss(date);
		string tmp,a[3];
		int i = 0;
		while(getline(ss,tmp,'/')){
			a[i++] = tmp;
		}
		if(a[0] == "29" && a[1] == "02"){
			
		}
		cout << a[0] << "/" << a[1] << "/" << n + stoi(a[2]) << endl;
	}
	return 0;
}
