#include<bits/stdc++.h>

using namespace std;
#define arraysize 10000

int main(){
	#ifdef DBG
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif

	int number[arraysize];
	int count = 0 , mid;

	while(cin >> number[count]){
		sort(number,number+count+1);
		if((count+1) % 2 !=0){
			cout << number[count/2] << endl;
		}//odd
		else{
			mid = (number[count/2] + number[count/2 + 1]) / 2;
			cout << mid << endl;
		}//even
		count++;
	}
	return 0;
}
