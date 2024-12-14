#include <bits/stdc++.h>
using namespace std;
int r,c;
int town[1000][1000];
int cnt=0;

int main(){
    cin >> r >> c >> n;
    vector<pair<int,int> > v; 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> town[i][j];
            if(town[i][j]==1) cnt++;
            v.push_back({i,j});
        }
    }
    while(n>=0){
        
        n--;
    }
    cout << cnt;
}