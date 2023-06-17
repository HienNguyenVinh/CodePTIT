#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu, mau;
};
void rutgon(PhanSo &a){
	long long k = __gcd(a.tu,a.mau);
	a.tu = a.tu/k;
	a.mau = a.mau/k;
}
PhanSo tong(PhanSo a, PhanSo b){
	PhanSo c;
	c.tu = a.tu*b.mau + a.mau*b.tu;
	c.mau = a.mau*b.mau;
	rutgon(c);
	return c;
}
PhanSo tich(PhanSo a, PhanSo b){
	PhanSo c;
	c.tu = a.tu*b.tu;
	c.mau = a.mau*b.mau;
	rutgon(c);
	return c;
}
void process(PhanSo a, PhanSo b){
	PhanSo m = tong(a,b);
	PhanSo c = tich(m,m);
	PhanSo d = tich(c,tich(a,b));
	cout << c.tu << "/" << c.mau << " ";
	cout << d.tu << "/" << d.mau;
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
