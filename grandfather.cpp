#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, string> father;

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        string a, b;
        cin >> a >> b;
        father[b] = a;
    }
    for(int i=0;i<m;i++){
        string a, b;
        cin >> a >> b;
        if(father[father[a]]==father[father[b]] && !father[father[a]].empty() && !father[father[b]].empty() && a!=b)
            cout << "YES\n";
        else cout << "NO\n";
    }
}