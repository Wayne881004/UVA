#include<bits/stdc++.h>

using namespace std;

int main(){
	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int Kase;
	while(cin >> Kase){
		int list[Kase],check[Kase-1];
		bool Jollycheck = true;

		for(int i = 0 ; i < Kase ; i++){
			cin >> list[i];
		}

		for(int i = 0 ; i < Kase-1 ; i++){
			check[i] = abs(list[i] - list[i+1]);
		}
		sort(check,check + (Kase-1) );
		for(int i = 1 ; i < Kase ; i++){
			if(check[i-1] != i){
				Jollycheck = false;
				printf("Not jolly\n");
				break;
			}
		}
		if(Jollycheck)
			printf("Jolly\n");
		
	}
	return 0;
}