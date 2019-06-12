#include<iostream>
#include<algorithm>

using namespace std;

int sticks[50+5];
int visited[50+5];
int len,n;

bool cmp (int a , int b){
	return a > b;
}

bool solve(int i, int l, int remain){
	if(l == 0){
		remain -= len;
		if(remain == 0) return true;

		for(i = 0 ; visited[i] ; i++);

		visited[i] = 1;

		if(solve(i+1,len-sticks[i],remain)) return true;

		visited[i] = 0; remain += len;
	}
	else{
		for(int j = i ; j < n ; j++){
			if(j > 0 && ((sticks[j] == sticks[j-1]) && !visited[j-1]))
				continue;
			
			if(len >= sticks[j] && !visited[j] ){

				visited[j] = 1; l -= sticks[j];
				if(solve(j,l,remain)) return true;
				visited[j] = 0 ; l += sticks[j];

				if(sticks[j] == l)	break;
			}
		}
	}
	return false;
}
int main(int argc, char const *argv[])
{
	while(~scanf("%d",&n) && n){
		int sum = 0;
		for(int i = 0 ; i < n ; i++){
			scanf("%d",&sticks[i]);
			visited[i] = 0;
			sum += sticks[i];
		}
		sort(sticks,sticks+n,cmp);


		bool flag = false;
		for(len = sticks[0] ; len <= sum/2 ; len++){
			if(sum % len == 0){
				if(solve(0,len,sum)){
					flag = true;
					printf("%d\n",len);
					break;
				}
			}
		}

		if(!flag) printf("%d\n",sum);
	}
	return 0;
}