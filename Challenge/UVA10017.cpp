// ----------
// 10017 - The Never Ending Towers of Hanoi
// ----------

#include<iostream>
#include<cstdio>
using namespace std;

int Ndisks , Nsteps;
#define A 0
#define B 1
#define C 2
#define MaxBox 3
#define MaxDisk 251
bool box[MaxBox][MaxDisk] , stop = false;

void AnsPrint(){
	if(Nsteps < 0 ) {
		stop = true;
		return ;
	}
	for(int i = 0 ; i < MaxBox ; i++){
		printf("%c=>",'A'+i);
		bool PrintSpace = false;
		for(int j = Ndisks ; j >= 0 ; j--){
			if(box[i][j]){
				if(!PrintSpace){
					cout << "  ";
					PrintSpace = true;
				}
				cout << " " << j+1 ;
			}
		}
		cout << endl;
	}
	cout << endl;
	Nsteps--;
}
void move(int n , int from , int middle , int to){
	box[from][n-1] = false;
	box[to][n-1] = true;
	AnsPrint();
}
void honoi(int n , int from , int middle , int to){
	if(stop) return;
	if(n == 1) {
		move(n , from , middle , to);
		return;
	}
	else{
		honoi(n-1 , from , to , middle);
		move(n , from , middle , to);
		honoi(n-1 , middle , from , to);

	}
}

int main(int argc, char const *argv[])
{
	// #ifdef DBG
	// freopen("input.in","r",stdin);
	// freopen("output.out","w",stdout);
	// #endif

	int Kase = 1;
	while(cin >> Ndisks >> Nsteps){
		if(Ndisks == 0 && Nsteps == 0) break;

		stop = false;
		printf("Problem #%d\n\n",Kase);
		Kase++;
		for(int i = 0 ; i < MaxBox ; i++){
			for(int j = 0 ; j < MaxDisk ; j++){
				box[i][j] = false;
			}
		}//clean
	
		for(int i = 0 ; i < Ndisks ; i++){
			box[A][i] = true;
		}
		AnsPrint();
		honoi(Ndisks, A , B , C);		
	}

	return 0;
}
//---------------------------------------------------------------------------------------------
//*                  *
//* Only Honoi Tower *
//*					 *
//---------------------
// #include<iostream>
// #include<cstdio>
// using namespace std;

// int Ndisks;
// #define A 0
// #define B 1
// #define C 2
// #define MaxBox 3
// #define MaxDisk 251
// bool box[MaxBox][MaxDisk];

// void AnsPrint(){
// 	for(int i = 0 ; i < MaxBox ; i++){
// 		printf("%c=>   ",'A'+i);
// 		for(int j = Ndisks ; j >= 0 ; j--){
// 			if(box[i][j]){
// 				cout << j+1 << " " ;
// 			}
// 		}
// 		cout << endl;
// 	}
// 	cout << endl;
// }
// void move(int n , int from , int middle , int to){
// 	box[from][n-1] = false;
// 	box[to][n-1] = true;
// 	AnsPrint();
// }
// void honoi(int n , int from , int middle , int to){
// 	if(n == 1) {
// 		move(n , from , middle , to);
// 		return;
// 	}
// 	else{
// 		honoi(n-1 , from , to , middle);
// 		move(n , from , middle , to);
// 		honoi(n-1 , middle , from , to);
// 	}
// }

// int main(int argc, char const *argv[])
// {
// 	for(int i = 0 ; i < MaxBox ; i++){
// 		for(int j = 0 ; j < MaxDisk ; j++){
// 			box[i][j] = false;
// 		}
// 	}
// 	cin >> Ndisks;
// 	for(int i = 0 ; i < Ndisks ; i++){
// 		box[A][i] = true;
// 	}
// 	honoi(Ndisks, A , B , C);
// 	return 0;
// }
//
//---------------------------------------------------------------------------------------------