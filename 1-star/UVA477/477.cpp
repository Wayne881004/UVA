#include<bits/stdc++.h>

using namespace std;

int main(){
	/*#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif*/

	int count = 1,point = 1;
	double set[1000][8];// 1~4 square 5~7 circle
	char star;
	double x , y;
	int button ;
	while(1){
		cin >> star;
		if(star == '*') break;
		if(star == 'c'){
			cin >> set[count][5] >> set[count][6] >> set[count][7];
		}
		else{
			cin >> set[count][1] >> set[count][2] >> set[count][3] >> set[count][4];
		}
		
		count++;
	}
	while(scanf("%lf %lf",&x,&y)){
		if(x == 9999.9 && y == 9999.9)
			break;
		button = 0;
		for(int j =  1 ; j < count ; j++){
			if(x > set[j][1] && y < set[j][2] && x < set[j][3] && y > set[j][4]){
				printf("Point %d is contained in figure %d\n",point,j);
				button = 1;
			}// check square
			if(sqrt(pow(x - set[j][5],2)+pow(y - set[j][6],2)) < set[j][7]){
				printf("Point %d is contained in figure %d\n",point,j);
				button = 1;
			}
		}
		if(button == 0)	printf("Point %d is not contained in any figure\n",point);
		point++;
	}
		return 0;
}
