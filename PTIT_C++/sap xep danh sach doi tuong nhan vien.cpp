#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

class NhanVien {
	private:
		string ten,gt,ns,dc,tax,hd;
		string dob;
		int ma;
	public:
		friend istream &operator >> (istream &in, NhanVien &a){
			++cnt;
			a.ma = cnt;
			in.ignore();
			getline(in, a.ten);
			in >> a.gt >> a.ns;
			a.dob = "";
			stringstream ss(a.ns);
			string tmp,mn[3];
			int i=0;
			while(getline(ss,tmp,'/')){
				mn[i++] = tmp;
			}
			a.dob = mn[2] + mn[0] + mn[1];
			in.ignore();
			getline(in,a.dc);
			in >> a.tax >> a.hd;
			return in;
		}
		friend ostream &operator << (ostream &out, NhanVien a){
			out << setfill('0') << setw(5) << a.ma << " ";
			out << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.tax << " " << a.hd << endl;
			return out;			
		}
		string getns(){
			return dob;
		}
};
bool cmp(NhanVien a, NhanVien b){
	return a.getns() < b.getns();
}
void sapxep(NhanVien a[], int n){
	sort(a,a+n,cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

//3
//Nguyen Van A
//Nam
//10/22/1982
//Mo Lao-Ha Dong-Ha Noi
//8333012345
//31/12/2013
//Ly Thi B
//Nu
//10/15/1988
//Mo Lao-Ha Dong-Ha Noi
//8333012346
//22/08/2011
//Hoang Thi C
//Nu
//04/02/1981
//Mo Lao-Ha Dong-Ha Noi
//8333012347
//22/08/2011
