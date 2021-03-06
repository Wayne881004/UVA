// ----------
// 
// 673 - Parentheses Balance
// 
// ----------

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("input.in", "r", stdin);
	freopen("output.out", "w", stdout);
	#endif

	int Kase,len;
	bool correct;
	string a;
	stack<char>stk;

	cin >> Kase;
	getchar();
	while(Kase--){
		while( !stk.empty() ) stk.pop();

		getline(cin,a);
		len = a.size();
		correct = true;
		for(int i = 0 ; i < len ; i++){
			if(a[i] == '(' || a[i] == '['){
				stk.push(a[i]);
			}
			else if(a[i] == ')'){
				if(stk.empty() || stk.top() != '('){
					correct = false;
					break;
				}
				else
					stk.pop();
			}
			else if(a[i] == ']'){
				if(stk.empty() || stk.top() != '['){
					correct = false;
					break;
				}
				else
					stk.pop();
					
			}
		}

		if(!stk.empty()){
			correct = false;
		}
		if(correct)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
