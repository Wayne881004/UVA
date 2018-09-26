#include<bits/stdc++.h>

using namespace std;
int main(){

	#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif
	
	int number,sum,average,group=1,total;
	int wall[50];
	while(scanf("%d",&number)){
		if(number == 0) break;
		for(int i = 0 ; i < number ; i++){
			cin >> wall[i];
			sum = sum + wall[i];
		}
		average = sum / number;
		for(int i = 0 ; i < number ; i++){
			if(wall[i] < average){
				total = total + average - wall[i];
			}
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",group,total);
		group++;
		total = 0;
		sum = 0;
		average = 0 ;
	}
	return 0;
}