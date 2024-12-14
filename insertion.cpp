#include <vector>
#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int data[n+1];
	int pos[n+1];
	for(int i=1;i<=n;i++){
		cin >> data[i];
		pos[data[i]] = i;
	}
	//for(int i=1;i<=n;i++) 
	//	cout << i << ' ' << pos[i] << '\n';
	for(int i=0;i<m;i++){
		int k, cnt=0;
		cin >> k;
		int x = pos[k];
		for(int j=1;j<=x;j++) if(data[j]>k) cnt++;
		cout << cnt << '\n';
	}
}
