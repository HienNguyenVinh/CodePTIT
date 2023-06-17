#include<bits/stdc++.h>

using namespace std;

string ch(string s){
	stringstream ss(s);
	string tmp,name = "";
	while(ss >> tmp){
		tmp[0] = toupper(tmp[0]);
		for (int i=1; i<tmp.size(); ++i){
			tmp[i] = tolower(tmp[i]);
		}
		name = name + tmp + " ";
	}
	return name;
}
int cnt = 0;
class SinhVien {
	private:
		string masv,ten,lop,ns;
		float gpa;
	public:
		SinhVien() {
			masv = ten = lop = ns = "";
			gpa = 0;
		}
		friend istream& operator >> (istream &in, SinhVien &a){
			++cnt;
			string tmp = to_string(cnt);
			a.masv = "B20DCCN" + string(3-tmp.size(),'0') + tmp;
			in.ignore();
			getline(in,a.ten);
			in >> a.lop >> a.ns >> a.gpa;
			if(a.ns[2] != '/') a.ns = "0" + a.ns;
			if(a.ns[5] != '/') a.ns.insert(3,"0");
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien a){
			out << a.masv << " " << ch(a.ten) << a.lop << " " << a.ns << " ";
			out << fixed << setprecision(2) << a.gpa << endl;
			return out;
		}
//		friend bool operator < (SinhVien a, SinhVien b){
//			return a.gpa < b.gpa;
//		}
		float getGpa(){
			return gpa;
		}
};
bool cmp(SinhVien a, SinhVien b){
	return a.getGpa() > b.getGpa();
}
void sapxep(SinhVien *ds, int n){
	sort(ds,ds+n,cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
