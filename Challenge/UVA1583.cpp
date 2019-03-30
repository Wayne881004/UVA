#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int check(int a){
	int len , tmp = a , ans = 0;
	bool control = false;
	while(tmp != 0){
		len++;
		tmp =  tmp / 10;
	}
	for(int i = a-len*10 ; i < a ; i++){
		tmp = i ;
		ans = i ;
		while(tmp != 0){
			ans += tmp % 10;
			tmp =  tmp / 10;
		}
		if(ans == a){
			ans =
			control = true;
			break;
		}
		else
			ans = 0;
	}
	if(control)
		return ans;
	else
		return 0;
}
int main(){
	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int N,num;
	cin >> N;
	while(N--){
		cin >> num;
		cout << check(num) << endl;
	}
	return 0;
}