#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	set<int> s;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		s.insert(x);
	}
	for(int i=0;i<m;i++){
		int q;
		cin >> q;
		bool check = 0;
		for(auto it:s){
			if(s.find(q-*it)!=s.end()){
				check = 1;
				break;
			}
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}
