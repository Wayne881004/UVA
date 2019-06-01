#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{

// 	freopen("input.in","r",stdin);
// 	freopen("output.out","w",stdout);

	int Kase;
	scanf("%d",&Kase);
	while(Kase--){
		int a,b,dis,step = 0,sum = 0 ,len = 0;
		scanf("%d %d",&a,&b);
		dis = b-a;

		while(1){
			len++;
			if(sum + 2*len > dis){
				break;
			}
			sum += 2*len;
			step += 2;
		}
		if(dis > (sum + len))
			step += 2;
		else if(sum != dis)
			step += 1;

		printf("%d\n",step);

	}
	return 0;
}
