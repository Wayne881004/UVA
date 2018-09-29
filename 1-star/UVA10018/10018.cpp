#include<bits/stdc++.h>

using namespace std;
long int reverse(long int Num){
    long int next = 0;
    while(Num>0){
        next = next*10 + Num % 10;
        Num /= 10;
    }
    return next;
}
int main(){
    /*#ifdef DBG
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif*/

    int times,anscount;
    long int num,next;
    
    while(scanf("%d",&times) != EOF){
        for(int i = 0 ; i < times ; i++){ 
            cin >> num;
            anscount = 0;
            next = reverse(num);
            num = num + next;            
            while(1){
                anscount++;
                next = reverse(num);
                if(num == next)
                    break;
                num = num + next;
            }           
            cout << anscount << " " << num << endl;
        }    
    }
    return 0;
}
