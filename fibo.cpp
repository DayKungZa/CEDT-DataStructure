#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int f[n+1];
    f[1] = 1;
    f[2] = 1;
    for(int i=3;i<=n;i++){
        f[i] = f[i-2] + f[i-1];
    }
    cout << f[n];
}