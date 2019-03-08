#include <iostream>

using namespace std;

int m,n,best;
int street[26][26];

void dfs(int i, int len){
	for(int j = 0 ; j < m ; j++){
		if(street[i][j]){
			street[i][j] = 0;
			street[j][i] = 0;
			dfs(j,len+1);
			street[i][j] = 1;
			street[j][i] = 1;
		}
		if(len > best) best = len;
	}

}
int main(int argc, char const *argv[])
{
	// #ifdef DBG
	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
	// #endif
	while(cin >> m >> n){
		if(m == 0 && n == 0) break;

		for(int i = 0 ; i < 25 ; i++){
			for(int j = 0 ; j < 25 ; j++){
				street[i][j] = 0;
			}
		}
		best = 0;
		for(int k = 0 ; k < n ; k++){
			int i , j;
			cin >> i >> j;
			street[i][j] = 1;
			street[j][i] = 1;
		}
		for(int i = 0 ; i < m ; i++){
			dfs(i,0);
		}
		cout << best << endl;
	}
	return 0;
}