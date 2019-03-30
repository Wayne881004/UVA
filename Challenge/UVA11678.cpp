#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif
	int a,b;
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;

		int Na[a] , Nb[b] , tmp , countA = 0 , countB = 0;

		for(int i = 0 ; i < a ; i++){
			scanf("%d",&Na[i]);
		}
		for(int i = 0 ; i < b ; i++){
			scanf("%d",&Nb[i]);
		}

		for(int i = 0 ; i < a ; i++){
			tmp = 0;
			if(Na[i] != Na[i-1]){
				for(int j = 0 ; j < b ; j++){
					if(Na[i] == Nb[j]){
						tmp = 1;
						break;
					}
				}
				if(tmp == 0) 
					countA++;
			}
		}

		for(int i = 0 ; i < b ; i++){
			tmp = 0;
			if(Nb[i] != Nb[i-1]){
				for(int j = 0 ; j < a ; j++){
					if(Nb[i] == Na[j]){
						tmp = 1;
						break;
					}
				}
				if(tmp == 0) 
					countB++;
			}
		}
		cout << min(countA,countB) << endl;
	}
	
	return 0;
}

