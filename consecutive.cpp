#include <iostream>
#include <set>
using namespace std;
set<string> bits;
int n, k;

void bitstring(string s, int pos, char bit){
	if(s.length()==n){
		bits.insert(s);
		return;
	}
	if(s.length()==pos)
		for(int i=0;i<k;i++) s += '1';
	else s+= bit;
	bitstring(s, pos, '0');
	bitstring(s, pos, '1');
}

int main(){
	cin >> n >> k;
	string s;
	for(int i=0;i<=n-k;i++){
		bitstring(s, i, '0');
		bitstring(s, i, '1');
	}
	for(auto x:bits){
		cout << x << '\n';
	}
}
