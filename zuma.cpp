#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,pos,v;
	int posShoot;
	cin >> n >> pos >> v;
	vector<pair<int,int>> zuma;
	int a;
	cin >> a;
	zuma.push_back({a,1});
	for(int i=1,k=0;i<n;i++){
		cin >> a;
		if(i==pos){
			if(zuma[k].first == v) zuma[k].second++;
			else {zuma.push_back({v,1}); k++;}
			posShoot = k;
		}
		if(zuma[k].first == a) zuma[k].second++;
		else {zuma.push_back({a,1}); k++;}
	}
	bool boom = (zuma[posShoot].second>=3)? 1 : 0;
	if(boom) zuma[posShoot].second = 0;
	int k = 1;
	while(boom){
		if(posShoot-k < 0 || posShoot+k >= zuma.size()) break;
		else if(zuma[posShoot-k].first == zuma[posShoot+k].first
			 && zuma[posShoot-k].second + zuma[posShoot+k].second >= 3){
			zuma[posShoot-k].second = 0;
			zuma[posShoot+k].second = 0;
			k++;
		}
		else break;
	}
	for(int i=0;i<zuma.size();i++){
		for(int j=0;j<zuma[i].second;j++) cout << zuma[i].first << ' ';
	}
}



