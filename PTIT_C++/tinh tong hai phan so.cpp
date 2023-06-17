#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long t,m;
};
void nhap(PhanSo &a){
	cin >> a.t >> a.m;
}
void rutgon(PhanSo &p){
	long long ucln = __gcd(p.t,p.m);
	p.t/=ucln;
	p.m/=ucln;
}
PhanSo tong(PhanSo a, PhanSo b){
	PhanSo sum;
	sum.t = a.t*b.m + b.t*a.m;
	sum.m = a.m*b.m; 
	rutgon(sum);
	return sum;
}
void in(PhanSo a){
	cout << a.t << "/" << a.m;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
