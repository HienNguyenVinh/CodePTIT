#include<bits/stdc++.h>

using namespace std;

#define ll long long
const int maxN = 1e3 + 1;
int n, a[maxN], k, ok;

void Sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i) --i;
    if(i == 0) ok = 0;
    else{
        ++a[i];
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    set<int> se;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    vector<int> v;
    for(auto x : se){
        v.push_back(x);
    }
    n = se.size();
    ok = 1;
    for(int i = 1; i <= k; i++) a[i] = i;
    while(ok){
        for(int i = 1; i <= k; i++) cout << v[a[i] - 1] << " ";
        cout << endl;
        Sinh();
    }
    return 0;
}
