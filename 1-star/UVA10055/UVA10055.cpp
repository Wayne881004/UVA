#include<bits/stdc++.h>

using namespace std;

int main(){
	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	long int a,b;	
	while(~scanf("%ld %ld",&a,&b)){
		printf("%ld\n",abs(a-b));
	}
	return 0;
}