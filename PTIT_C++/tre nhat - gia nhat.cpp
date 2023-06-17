#include<bits/stdc++.h>
using namespace std;

struct info{
	string ten, ns, cm;
};
bool cmp(info a, info b){
	return a.cm > b.cm;
}
int main() {
	int n;
	cin >> n;
	info peop[n];
	for(int i=0; i<n; ++i) {
		cin >> peop[i].ten >> peop[i].ns;
		peop[i].cm = "";
		stringstream ss(peop[i].ns);
		string tmp;
		while(getline(ss,tmp,'/')){
			peop[i].cm = tmp + peop[i].cm;
		}
	}
	sort(peop,peop+n,cmp);
	cout << peop[0].ten << endl;
	cout << peop[n-1].ten;
	return 0;
}
