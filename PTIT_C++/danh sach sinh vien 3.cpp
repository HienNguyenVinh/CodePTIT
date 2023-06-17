#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ten,lop,ngaySinh;
	int masv;
	float gpa;
};
string fix(string s){
	s[0] = toupper(s[0]);
	for(int i=1; i<s.size(); ++i){
		s[i] = tolower(s[i]);
	}
	return s;
}
string chuanHoa(string name){
	string s;
	stringstream ss(name);
	string tmp;
	int cnt = 0;
	while(ss >> tmp){
		s += fix(tmp);
		s+=" ";
	}
	return s;
}
bool cmp(SinhVien x, SinhVien y){
	return x.gpa > y.gpa;
}
void nhap(SinhVien *ds, int n){
	for(int i=0; i<n; ++i){
		cin.ignore();	
		getline(cin,ds[i].ten);
		cin >> ds[i].lop >> ds[i].ngaySinh >> ds[i].gpa;
		ds[i].masv = i+1;
	}
}
void sapxep(SinhVien *ds, int n){
	sort(ds, ds+n, cmp);
}
void in(SinhVien *ds, int n){
	for(int i=0; i<n; ++i){
		cout << "B20DCCN";
		int ma[3];
		int k=2;
		while(k>=0){
			ma[k] = ds[i].masv%10;
			ds[i].masv/=10;
			--k;
		}
		for(int j=0; j<3; ++j){
			cout << ma[j];
		}
		cout << " " << chuanHoa(ds[i].ten) << ds[i].lop << " ";
		stringstream ss(ds[i].ngaySinh);
		string tmp;
		string a[3];
		int cnt = 0;
		while(getline(ss,tmp,'/')){
			a[cnt++] = tmp;
		}
		if(a[0].size() == 1){
			cout << "0" << a[0] << "/";
		}else{
			cout << a[0] << "/";
		}
		if(a[1].size() == 1){
			cout << "0" << a[1] << "/";
		}else{
			cout << a[1] << "/";
		}
		cout << a[2] << " ";
		cout << fixed << setprecision(2) << ds[i].gpa;
		cout << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
