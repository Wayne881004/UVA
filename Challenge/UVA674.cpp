#include<iostream>

using namespace std;

int coin[5] = {1,5,10,25,50};
int ans[7500];
int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int input;
	for(int i = 0 ; i < 7500 ; i++){
		ans[i] = 1;
	}
	for(int i = 1 ; i < 5 ; i++){
		for(int j = 1 ; j < 7500 ; j++){
			if(j >= coin[i]){
				ans[j] += ans[j-coin[i]];
			}
		}
	}
	while(cin >> input){
		cout << ans[input] << endl;
	}

	return 0;
}