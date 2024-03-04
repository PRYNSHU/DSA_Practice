#include <bits/stdc++.h>
using namespace std;

void count(int n){
    //base cond
    //when fun returns it doesn't process further lines, 
    // just back to previous count/fun
    if(n==0)
        return; //void fun
        //when base cond true, below part of that fun doesn't execute.

    //processing (optional component)
    cout << n << endl;

    //recurcive relation
    count(n-1);
    cout << n << endl;
    //every fun is in stack , when one is completed(reaches last line)
    //it get back to previous fun & eventually to the main fun.
}


int fact(int n){
    //base condition (where to stop)
    if(n==0)
        return 1; // In base condition return is mandatory

    //recursive relation
    int ans = n * fact(n-1); 
    cout << n << "-" << ans << endl;
    
    //must return for non void
    return ans; 
}

int power(int n){
    //base cond
    if(n==0)
        return 1;

    //recursive relation
    int p = 2 * power(n-1);
    return p;
}

int sumarr(int arr[], int n){
    //base condition
    if(n==1){
        return arr[0];
    }
    // cout << arr[0] << " " << n << endl;
    //recursive relation
    int sum1 = arr[0] + sumarr(arr +1, n-1);
    // int sum2 = 100 + sumarr(arr +1, n-1);

    // return sum1;
    // return sum2;
    // return sum1 + sum2;
    return 10 +sum1;
}

int main(){

    int n = 5;
    // int ans = fact(n);
    // cout << ans << endl;
    // cout << "===" << endl;
    // count(n);
    
    // int ans2 = power(n);
    // cout << ans2 << endl;

    int arr[10] = {1,2,3,4,5};
    // cout << "===" << endl;
    cout << "sum is " << endl;
    int ans = sumarr(arr , n);
    cout << ans << endl;

}

