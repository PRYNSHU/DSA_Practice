#include "bits/stdc++.h"
using namespace std;

int main(){

    int t , a ,b , c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int cnt =0;
        while(1){
            if(a > b){
                
                if(a - b > c){
                    a = a -c;
                    b = b +c;
                    cnt++;
                }else{
                    cnt +=1;
                    break;
                }
                
            }else if(b > a){
                
                if(b - a > c){
                    b = b -c;
                    a = a +c;
                    cnt++;
                }else{
                    cnt +=1;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }

}