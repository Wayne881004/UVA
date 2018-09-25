#include <bits/stdc++.h>

using namespace std;

int main(){
	char chr;
	while(scanf("%c",&chr) != EOF){
		if(chr != '\n'){
			chr = chr - 7;
		}
		cout << chr;

	}
	return 0;
}