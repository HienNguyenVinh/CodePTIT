#include<bits/stdc++.h>

using namespace std;

struct startup{
	int ma,share,tt;
	float score;
};

bool cmp(startup a, startup b){
	return a.score > b.score;
}
int main(){
	int n;
	cin >> n;
	startup list[n];
	for(int i=0; i<n; ++i){
		cin >> list[i].ma >> list[i].share >> list[i].tt;
		list[i].score = 0.7*list[i].share + 0.3*list[i].tt;
	}
	stable_sort(list,list+n,cmp);
	for(int i=0; i<7; ++i){
		cout << list[i].ma << " ";
	}
	return 0;
}
