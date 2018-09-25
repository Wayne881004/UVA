#include <bits/stdc++.h>


using namespace std;

int main(){

	/*#ifdef DBG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif*/

	int x,y,count,max=0,tmp,n,z;
	bool change = false; 
	while(scanf("%d %d",&x,&y) != EOF){
		if(x > y){
			z = x;
			x = y;
			y = z;
			change = true;
		}
		for(int i = x; i <= y ;i++){
				count = 1;
				n = i;
				while(n != 1){
					count++;
					if(n % 2 == 0)
						n = n / 2;
					else
						n = 3 * n + 1;
				}
				if(count > max){
					max = count;
				}
		}//algorithm
		if(change){
			z = x;
			x = y;
			y = z;
		}
		cout << x << " " << y << " "<<  max << endl;
		change = false;
		max = 0;
	}
	return 0;
}	