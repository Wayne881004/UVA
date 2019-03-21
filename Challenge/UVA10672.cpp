#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<cmath>
using namespace std;

#define max 10005
int n,ans;
int marble[max],parent[max],order[max];
queue<int>q;
void init(){
	memset(marble,0,sizeof(marble));
	memset(parent,0,sizeof(parent));
	memset(order,0,sizeof(order));
	int num;

	for(int i = 0 ; i < n ; i++){
		cin >> num ;
		cin >> marble[num] >> order[num];
		for(int j = 0 ; j < order[num] ; j++){
		 	int child;
			cin >> child;
			parent[child] = num;
		}
	}
}
void Move(){
	for(int i = 1 ; i <= n ; i++){
		if(order[i] == 0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int index = q.front();
		q.pop();
		int father = parent[index];
		if(marble[index] != 1){
			marble[father] += (marble[index] - 1);
			ans +=  abs(marble[index] - 1 );
			marble[index] = 1;
		}
			order[father]--;
		if(order[father] == 0){
			q.push(father);
		}

	}
}
int main(int argc, char const *argv[])
{
	#ifdef DBG
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif
	while(~scanf("%d",&n) && n ){
		init();
		ans = 0;
		Move();
		cout << ans << endl;
	}
	return 0;
}