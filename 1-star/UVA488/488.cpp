#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,height,many;
	cin >> num;
	for(int i = 0 ; i < num ; i++){
		cin >> height>> many;
		for(int g = 0 ; g < many ;g++){
			for(int j = 1 ; j <= height ; j++){
				for(int h = 0 ; h < j ; h++)		cout << j;
				cout << endl;
			}
			for(int j = height-1 ; j > 0 ;j--){
				for(int h = 0 ; h < j ; h++)		cout << j;
				cout << endl;
			}
			if(i == num-1 && g == many-1){
				break;
			}
			cout << endl;
			
		}
	}
	return 0;
}
