#include <bits/stdc++.h>
using namespace std;
int r,c;
bool field[10][10];

void walk(string path, short posx, short posy, char last){
	//cout << posx << posy << last << endl << path << endl;
	if(last!=0) path += last;
	if(posx==c-1&&posy==r-1){
		cout << path << '\n';
		return;
	}
	if(posx+1<c&&field[posy][posx+1]==0)
		walk(path, posx+1, posy, 'A');
	if(last!='C'&&posy+1<r&&field[posy+1][posx]==0)
		walk(path, posx, posy+1, 'B');
	if(last!='B'&&posy-1>=0&&field[posy-1][posx]==0)
		walk(path, posx, posy-1, 'C');
}

int main(){
	cin >> r >> c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			int a;
			cin >> a;
			field[i][j] = a;
		}
	}
	string s;
	walk(s,0,0,0);
	cout << "DONE";
}
