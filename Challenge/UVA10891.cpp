#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;

const int max_N = 105;
int P[max_N], A[max_N], d[max_N][max_N], visited[max_N][max_N], n;

int dp(int i , int j){
	if(visited[i][j]) return d[i][j];
	int m = 0;
	visited[i][j] = 1;

	for(int k = i+1 ; k <= j ; k++){
		m = min(m , dp(k,j));
	}
	for(int k = i ; k < j ; k++){
		m = min(m , dp(i,k));
	}

	d[i][j] = P[j] - P[i-1] - m;
	return d[i][j];
}

int main(int argc, char const *argv[])
{
	while(~scanf("%d",&n)){
		memset(visited,0,sizeof(visited));
		P[0] = 0;
		for(int i = 1 ; i <= n ; i++){
			scanf("%d", &A[i]);
			P[i] = P[i-1] + A[i];
		}
		printf("%d\n",2 * dp(1,n) - P[n]);
	}
	return 0;
}