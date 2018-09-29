#include<bits/stdc++.h>

using namespace std;

int main(){
	char chr;
	int tmp=1;
	while(scanf("%c",&chr) != EOF){
		if(chr == '"'){
			if(tmp == 1){
				cout << "``";
				tmp = 2;
			}
			else{
				cout << "''";
				tmp = 1;
			}
		}
		else {
			cout << chr;
		}
	}
	return 0;
}
