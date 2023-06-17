#include<bits/stdc++.h>

using namespace std;

class Data{
public:
    string str;
    int cnt;

    Data(string s, int c){
        this->str = s;
        this->cnt = c;
    }
};

void handle(int n){
    queue <Data> qu;
    vector <string> res;
    qu.push(Data("", 0));
    while(res.size() != n){
        string str = qu.front().str;
        int cnt = qu.front().cnt;
        qu.pop();
        if(str[0] == '0'){
            continue;
        }
        if(cnt*2 > str.length()){
            res.push_back(str);
        } 
        qu.push(Data(str+'0', cnt));
        qu.push(Data(str+'1', cnt));
        qu.push(Data(str+'2', cnt+1));
    }
    for(int i=0; i<n; i++){
        cout << res[i] << " ";
    }
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		handle(n);
		cout << endl;
	}
	return 0;
}
