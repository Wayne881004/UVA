// ----------
// Uva1121 - Subsequence
// ----------
#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MaxSize 100005
int Prefix[MaxSize];

int main(int argc, char const *argv[])
{
	// #ifdef DBG
	// freopen("input.in","r",stdin);
	// freopen("output.out","w",stdout);
	// #endif
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	int N,S,tmp,ans;
	while(~scanf("%d %d", &N, &S)){
		memset(Prefix,0,sizeof(Prefix));
		ans = 0;
		for(int i = 1 ; i <= N ; i++){
			scanf("%d",&Prefix[i]);
			Prefix[i] += Prefix[i-1]; 
		}

		for(int i = 0 ; i < N ; i++){
			int j = i+1;
			tmp = 1;
			while((Prefix[j]-Prefix[i]) < S){
				if(j > N){
					tmp = 0;
					break;
				}
				j++;
				tmp++;
			}
			if(i == 0 && tmp > 0){
				ans = tmp;
			}
			else if(tmp > 0){
				ans = min(tmp,ans);
			}
		}
		cout << ans << endl;
	}
	return 0;
}