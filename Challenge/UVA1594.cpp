#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>

using namespace std;

int a[20];

int next(int n){
	int tmp = a[0];
	int countZero = 0;
	for(int i = 0 ; i < n ; i++){

		if(i == n-1){
			a[i] = abs(a[i] - tmp);
			if(a[i] == 0){
				countZero++;
			}
			break;
		}

		a[i] = abs(a[i] - a[i+1]);

		if(a[i] == 0){
			countZero++;
		}
	}

	return countZero;
}

int main(){

	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int Kase,N;
	bool zero;
	scanf("%d",&Kase);
	while(Kase--){
		scanf("%d",&N);

		for(int i = 0 ; i < N ; i++){
			scanf("%d",&a[i]);
		}
		zero = false;
		for(int i = 0 ; i < 1001 ; i++){
			if(next(N) == N){
				zero = true;
				break;
			}
		}

		if(zero)
			printf("ZERO\n");
		else
			printf("LOOP\n");
	}
	return 0;
}
