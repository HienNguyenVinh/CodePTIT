#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	string s;
	queue <int> qu;
	while(n--){
		cin >> s;
		if(s == "PUSH"){
			int x; cin >> x;
			qu.push(x);
		}else if(s == "POP"){
			if(!qu.empty()){
				qu.pop();
			}
		}else{
			if(qu.empty()){
				cout << "NONE";
			}else{
				cout << qu.front();
			}
		}
		cout << endl;
	}
}
int main(){
	handle();
	return 0;
}
