#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifdef	DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	char c;
	int flag;
	while(scanf("%c",&c) != EOF){
		int count = 0 , flag = 0;
		while(c != '\n'){
			if( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
				flag = 1;
			}
			else {
				if(flag){
					count++;
					flag = 0;
				}
			}
			scanf("%c",&c);
		}
		cout << count << endl;
	}
	return 0;
}