#include <iostream>
#include <set>
using namespace std;
set<string> barcodes;
int n, k;

void gen(string s, int one, char bit){
	s += bit;
	if(s.length()==n){
		if(one==k) barcodes.insert(s);
		return;
	}
	if(one<k)
		gen(s, one+1, '1');
	gen(s, one, '0');
}

int main(){
	cin >> k >> n;
	string s;
	gen(s, 0, '0');
	gen(s, 1, '1');
	for(auto x:barcodes)
		cout << x << '\n';
}
