#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> setyor;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        setyor.insert(x);
    }

    if(*(setyor.begin())==1 && *(--setyor.end())==n && setyor.size()==n)
        cout << "YES";
    else cout << "NO";
}