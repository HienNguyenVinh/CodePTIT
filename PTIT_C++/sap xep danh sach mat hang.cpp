#include<bits/stdc++.h>

using namespace std;

struct goods{
	int ma;
	string ten, nhom;
	double buy,sell,profit; 
};
bool cmp(goods a, goods b){
	return a.profit > b.profit;
}
int main(){
	int n;
	cin >> n;
	goods list[n];
	for(int i=0; i<n; ++i){
		list[i].ma = i+1;
		cin.ignore();
		getline(cin, list[i].ten);
		getline(cin, list[i].nhom);
		cin >> list[i].buy >> list[i].sell;
		list[i].profit = list[i].sell - list[i].buy;
	}
	stable_sort(list, list+n, cmp);
	for(int i=0; i<n; ++i){
		cout << list[i].ma << " " << list[i].ten << " " << list[i].nhom << " ";
		cout << fixed << setprecision(2) << list[i].profit;
		cout << endl;
	}
	return 0;
}
