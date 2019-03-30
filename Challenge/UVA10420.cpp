#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;


int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int N , num;
	string b[2005];
	char a[76];
	cin >> N;
	for(int i = 0 ; i < N ; i++){
		cin >> b[i];
		fgets(a, sizeof(a), stdin);
	}

	sort(b,b+N);

	for(int i = 0 ; i < N ;){
		cout << b[i] << " " ;
		int num = 1 , j;
		for( j = i+1 ; j < N ; j++){
			if(b[j] != b[i]) 
				break;
			num++;
		}
		cout << num << endl;
		i = j;
	}
	return 0; 
}
