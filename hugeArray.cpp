#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<pair<int,int>> v;
	vector<int> answer;
	int n, m;
	cin >> n >> m;
	while(n--){
		int a, b;
		cin >> a >> b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end());
	answer.push_back(v[0].second);
	for(int i=1;i<v.size();i++){
		answer.push_back(v[i].second + answer[i-1]);
	}
	while(m--){
		int x;
		cin >> x;
		int it = lower_bound(answer.begin(), answer.end(), x)-answer.begin();
		cout << v[it].first << '\n';
	}
}
