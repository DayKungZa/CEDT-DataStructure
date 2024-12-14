#include <bits/stdc++.h>
using namespace std;
int k;
vector<int> v;

int count(int p){
    return upper_bound(v.begin(), v.end(), p+k) - lower_bound(v.begin(), v.end(), p-k);
}

int main(){
    int n, m;
    cin >> n >> m >> k;
    for(int i=0;i<n;i++){
        int p;
        cin >> p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        int q;
        cin >> q;
        cout << count(q) << ' ';
    }
}
