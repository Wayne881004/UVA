// ----------
// Uva10276 - Hanoi Tower Troubles Again!
// ----------


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
int amount,ans;

void calculate(int num){
	int Pegs[num],i = 0;
	double test;
	memset(Pegs,0,sizeof(Pegs));
	while(i != num){
		test = sqrt(Pegs[i] + ans);
		if(Pegs[i] == 0) {
			Pegs[i] = ans;
			ans++;
			i = 0;
		}
		else if(test == (int)test){
			Pegs[i] = ans;
			ans++;
			i = 0;
			
		}
		else{
			i++;
		}
	}

}
int main(int argc, char const *argv[])
{
	int Kase;
	while(cin >> Kase){
		for(int i = 0 ; i < Kase ;i++){
			ans = 1;
			cin >> amount;
			calculate(amount);
			cout << ans - 1  << endl;
		}
	}
	return 0;
}