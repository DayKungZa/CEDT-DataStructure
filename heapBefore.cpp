#include <iostream>
#include <vector>
using namespace std;
int n;
int cnt = 0;
vector<bool> check;

void except(int k){
	if(k>=n) return;
	check[k] = false;
	cnt++;
	except(2*k+1);
	except(2*k+2);
}

int main(){
	int m;
	cin >> n >> m;
	for(int i=0;i<n;i++) check.push_back(true);
	except(m);
	cout << n-cnt << '\n';
	for(int i=0;i<n;i++)
		if(check[i]) cout << i << ' ';
	
}
