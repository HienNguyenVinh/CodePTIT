#include<bits/stdc++.h>

using namespace std;

struct SoPhuc{
	int ao,thuc;
};
SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
	SoPhuc s;
	int m = a.thuc + b.thuc;
	int n = a.ao + b.ao;
	s.thuc = m*m-n*n;
	s.ao = 2*m*n;
	return s;
}
void hien_thi(SoPhuc a){
	cout << a.thuc << " + " << a.ao << "i";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
