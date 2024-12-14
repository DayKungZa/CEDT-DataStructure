#include <iostream>
#include <set>
using namespace std;
set<pair<int,int>> bought;

void buy(int a, int b){
	for(auto it=bought.begin();it!=bought.end();){
		//printf("current: %d %d / %d %d\n", it->first, it->second, a, b);
		if((it->first-1 <= b && it->second+1 >= b)
		|| (it->first-1 <= a && it->second+1 >= a)
		|| (it->first    > a && it->second    < b)){
			//cout << "connects!\n";
			int first = min(it->first,a);
			int second = max(it->second,b);
			it = bought.erase(it);
			a = first;
			b = second;
		}
		else it++;
	}
	bought.insert({a,b});
}

void print(){
	cout << bought.size() << '\n';
}

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int c;
		cin >> c;
		if(c==1){
			int a, b;
			cin >> a >> b;
			buy(a,b);
		}
		if(c==2){
			print();
		}
	}
}
