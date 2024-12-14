#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
	map<string,int> ballot;
	vector<int> score;
	int n, k;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		string name; cin >> name;
		if(ballot.find(name)==ballot.end())
			ballot[name] = 1;
		else ballot[name]++;
	}
	for(auto x:ballot){
		score.push_back(x.second);
	}
	sort(score.begin(),score.end());
	//for(auto x:score) cout << x << ' ';
	if(score.end()-k<score.begin()) cout << score[0];
	else cout << *(score.end()-k);
}
