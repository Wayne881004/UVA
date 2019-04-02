#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DBG
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif

	int num,worst = 1,best = 10;
	string trash,a;

	while(cin >> num){
		if(num == 0) break;

		cin >> trash >> a;

		if(a[0] == 'h'){
			if(best >= num){
				best = num - 1;
			}
		}

		else if(a[0] == 'l'){
			if(worst <= num){
				worst = num + 1;	
			}
		}

		else if(a[0] == 'o'){
			if(num >= worst && num <= best){
				cout << "Stan may be honest" << endl;
				best = 10;
				worst = 1;
			}
			else{
				cout << "Stan is dishonest" << endl;
				best = 10;
				worst = 1;
			}
		}
	}
	return 0;
}