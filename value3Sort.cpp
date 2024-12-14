#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0;i<n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) cnt++;
    }
    cout << cnt/2+cnt%2;
}