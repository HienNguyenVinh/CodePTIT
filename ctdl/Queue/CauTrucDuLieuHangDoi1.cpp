#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	int tmp;
	queue <int> qu;
	while(n--){
		cin >> tmp;
		switch(tmp){
			case 1:
				cout << qu.size();
				break;
			case 2:
				if(qu.empty()){
					cout << "YES";
				}else{
					cout << "NO";
				}
				break;
			case 3:
				int x; cin >> x;
				qu.push(x);
				break;
			case 4:
				if(!qu.empty()){
					qu.pop();
				}
				break;
			case 5:
				if(!qu.empty()){
					cout << qu.front();
				}else{
					cout << -1;
				}
				break;
			case 6:
				if(!qu.empty()){
					cout << qu.back();
				}else{
					cout << -1;
				}
				break;
		}
		cout << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		handle();
		cout << endl;
	}
	return 0;
}
