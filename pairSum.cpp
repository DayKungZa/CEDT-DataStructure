#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    set<int> s;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
        for(int j=0;j<i;j++){
            s.insert(a[i]+a[j]);
        }
    }
    for(int j=0;j<m;j++){
        int x;
        cin >> x;
        auto it = s.find(x);
        if(it!=s.end()) cout << "YES\n";
        else cout << "NO\n";

    }
}