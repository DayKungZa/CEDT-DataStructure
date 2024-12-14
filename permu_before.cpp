#include <iostream>
#include <vector>
using namespace std;
int revcon[20];
int n;

void permu(vector<int> v, vector<bool> used, int next){
	used[next] = 1;
	v.push_back(next);
	if(v.size()==n){
		for(auto x:v)
			cout << x << ' ';
		cout << '\n';
		return;
	}
	for(int i=0;i<n;i++){
		if(!used[i]){
			if(!used[i] && (revcon[i]==-1 || used[revcon[i]]))
				permu(v, used, i);
		}
	}
}

int main(){
	int m;
	cin >> n >> m;
	vector<bool> used;
	for(int i=0;i<n;i++){
		revcon[i] = -1;
		used.push_back(0);
	}
	
	while(m--){
		int a, b;
		cin >> a >> b;
		revcon[b] = a;
	}
	
	vector<int> sol;
	for(int i=0;i<n;i++)
		if(revcon[i]==-1)
			permu(sol, used, i);
}
