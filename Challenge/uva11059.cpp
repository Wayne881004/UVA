#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DBG
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif
	int N , Kase = 1;
	while(cin >> N){
		int a[N];
		long long ans = 0 , sum;
		for(int i = 0 ; i < N ; i++){
			cin >> a[i];
			if(a[i] >= ans){
				ans = a[i];
			}
		}
		for(int i = 0 ; i < N-1 ; i++){
			for(int j = i+1 ; j < N ; j++){
				sum = 1;
				for(int h = i ; h <= j ; h++){
					sum *= a[h];
				}
				ans = max(ans,sum);
			}
		}
		if(ans < 0){
			ans = 0;
		}
		if(Kase != 1){
			printf("\n");
		}
		printf("Case #%d: The maximum product is %lld.\n",Kase,ans);
		Kase++;
	}
	printf("\n");
	return 0;
}