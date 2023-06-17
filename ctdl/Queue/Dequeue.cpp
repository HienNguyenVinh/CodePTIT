#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n; cin >> n;
	string s;
	deque <int> du;
	while(n--){
		cin >> s;
		if(s == "PUSHFRONT"){
			int x; cin >> x;
			du.push_front(x);
		}else if(s == "PRINTFRONT"){
			if(!du.empty()){
				cout << du.front();
			}else {
				cout << "NONE";
			}
		}else if(s == "POPFRONT"){
			if(!du.empty()){
				du.pop_front();
			}
		}else if(s == "PUSHBACK"){
			int x; cin >> x;
			du.push_back(x);
		}else if(s == "PRINTBACK"){
			if(du.empty()){
				cout << "NONE";
			}else{
				cout << du.back();
			}
		}else{
			if(!du.empty()){
				du.pop_back();
			}
		}
		cout << endl;
	}
}
int main(){
	handle();
	return 0;
}
