#include "bits/stdc++.h"
using namespace std;

string infixToPostfix(string exp){
	string s = "";
	for(int i = 0 ;i<exp.length();i++){

		if('0' <= exp[i] && exp[i] <= '9'){
			s.push_back(exp[i]);
		}
	}

	for(int i = 0 ;i<exp.length();i++){

		if(!('0' <= exp[i] && exp[i] <= '9')){
			s.push_back(exp[i]);
		}
	}
	return s;

}

int main() {
    string ans = infixToPostfix("(3-7+5)+v+(d/2)");
    cout << ans;
}