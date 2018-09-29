#include<bits/stdc++.h>

using namespace std;

int main(){
	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	float H , M ,ans;
	char point;
	while(scanf("%f%c%f",&H,&point,&M)){
		if(H == 0 && M == 0){
			break;
		}
		else{
			H = 30*H + 0.5*M;
			M = 6*M;
			ans = H-M;
			if(fabs(ans) > 180){
				printf("%.3f\n",360-fabs(ans));
			}
			else{
				printf("%.3f\n",fabs(ans));
			}
			
		}
		
	}
	return 0;
}
