#include <bits/stdc++.h>
using namespace std;

int main(){
	double n, w;
	double money = 0;
	cin >> w >> n;
	vector<pair<double,double> > item;
	vector<double> v;
	for(int i=0;i<n;i++){
		double x;
		cin >> x;
		v.push_back(x);
	}
	for(int i=0;i<n;i++){
		double b;
		cin >> b;
		item.push_back({v[i]/b,b});
	}
	sort(item.begin(), item.end());
	reverse(item.begin(), item.end());
	int i=0;
	while(w>0){
		if(item[i].second>w) {
			money += item[i].first * w;
			break;
		}
		else{
			money += item[i].first * item[i].second;
			w -= item[i].second;
			i++;
		}
	}
	cout << fixed << setprecision(4) << money;
}
