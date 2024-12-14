#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<long> haitus;
	int n, m;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		long y,m; cin >> y >> m;
		haitus.push_back(y*100+m);
	}
	sort(haitus.begin(),haitus.end());
	//for(long x:haitus) cout << x << endl;
	for(int i=0;i<m;i++){
		long y,m; cin >> y >> m;
		long data = y*100+m;
		bool found=0;
		if(data<haitus[0]){ cout << "-1 -1 "; found = 1;}
		else for(int i=0;i<haitus.size()&&!found;i++){
			if(data==haitus[i]){ cout << "0 0 "; found = 1; break;}
			else if(haitus[i]>data&&!found){ printf("%d %d ", haitus[i-1]/100, haitus[i-1]%100); found = 1; break;}
		}
		if(!found) cout << haitus[haitus.size()-1]/100 << ' ' << haitus[haitus.size()-1]%100 << ' ';
	}
}
