#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long t,m;
};
void nhap(PhanSo &p){
	cin >> p.t >> p.m;
}
void rutgon(PhanSo &p){
	long long ucln = __gcd(p.t,p.m);
	p.t/=ucln;
	p.m/=ucln;
}
void in(PhanSo p){
	cout << p.t << "/" << p.m;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
