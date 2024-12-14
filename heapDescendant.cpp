#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void child(int n, int k, set<int> &s){
	if(k>=n) return;
	s.insert(k);
	child(n,2*k+1,s);
	child(n,2*k+2,s);
}

int main(){
	int n,k;
	cin >> n >> k;
	set<int> s;
	child(n,k,s);
	cout << s.size() << endl;
	for(auto x:s) cout << x << ' ';
}
