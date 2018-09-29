#include<bits/stdc++.h>

using namespace std;
int main(){
	long long num,ans,row,rightnum;
	while(scanf("%lld",&num) != EOF){
		row = (num+1)/2;
		rightnum = row*row*2 - 1;//find row
		ans = 3*rightnum -6;
		printf("%lld\n",ans);
	}
	return 0;
}
