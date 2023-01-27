#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    //base condition (where to stop)
    if(n==0)
        return 1; // In base condition return is mandatory

    //recursive relation
    return n * fact(n-1);
}

int power(int n){
    //base cond
    if(n==0)
    return 1;

    //recursive relation
    int rel = 2 * power(n-1);
}

void count(int n){
    //base cond
    if(n==0)
    return; //void fun

    //processing (optional component)
    cout << n << endl;

    //recurcive relation 
    //(as rec. rel. is below from processing ,it is called TAIL recursion)
    count(n-1);
 
}

int sumarr(int arr[], int n){
    //base condition
    if(n==1){
        return arr[0];
    }
    //cout << arr[0] << " " << n << endl;

    //recursive relation
    int sum = arr[0] + sumarr(arr +1, n-1);
    return sum;
}

int main(){
    int n = 5;
    int ans = fact(n);
    cout << ans << endl;

    int ans2 = power(n);
    cout << ans2 << endl;

    count(n);
    // cout << "sum is " << endl;
    // int ans = sumarr(arr , n);
    // cout << ans << endl;
}