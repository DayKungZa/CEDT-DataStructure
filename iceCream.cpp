#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, p;
	cin >> n >> m >> p;
	vector<pair<int,int>> change;
	vector<long long> money;
	for(int i=0;i<n;i++){
		int day, amount;
		cin >> day >> amount;
		change.push_back({day,amount});
	}
	if(!change.empty()) sort(change.begin(), change.end());
	int mon = 0, r = p;
	for(int i=1,j=0;i<=100000;i++){
		if(!change.empty())
			if(i==change[j].first+1 && j<change.size())
				r = change[j++].second;
		mon += r;
		money.push_back(mon);
	}
	for(int i=0;i<m;i++){
		int q, x;
		cin >> q >> x;
		int d = lower_bound(money.begin(),money.end(), q)-money.begin(); 
		if(d<=x) cout << d << ' ';
		else cout << lower_bound(money.begin(), money.end(), q+money[x])-money.begin() << ' ';
	}
}
