#include<iostream>
#include<cstring>
using namespace std;

int main(){
	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif
	long long  numA,numB;
	int A[10],B[10],sizeA,sizeB,ans;
	while(1){
memset(A,0, sizeof(A));
memset(B,0, sizeof(B));
		sizeA = 0 , sizeB = 0 , ans = 0;
		cin >> numA >> numB;
		if(numA == 0 && numB == 0) break;

		else{
			while(numA > 0){
				A[sizeA] = numA % 10 ;
				numA /= 10;
				sizeA++;
			}
			while(numB > 0){
				B[sizeB] = numB % 10 ;
				numB /= 10;
				sizeB++;
			}//store
			if(sizeA >= sizeB){
				for(int i = 0 ; i < sizeA ; i++){
					if(A[i] + B[i] >= 10) {
						B[i+1]++;
						ans++;
					}
				}
			}
			else if(sizeA < sizeB){
				for(int i = 0 ; i < sizeB ; i++){
					if(A[i] + B[i] >= 10) {
						B[i+1]++;
						ans++;
					}
				}			
			}//algorithm			
		}

		if(ans == 0) cout << "No carry operation." << endl;
		else if(ans == 1) cout << "1 carry operation." << endl;
		else if(ans > 1) cout << ans << " carry operations." << endl;

	}
}