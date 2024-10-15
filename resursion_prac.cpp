#include <iostream>
using namespace std;


int fact(int n ) {

    if(n == 0)
        return 1;
    cout << n << endl;
    int ans = n * fact(n-1);
    cout << ans << endl;
    return ans;
}

void printName(int i, int n) {
    if(i > n) return ;

    cout << i << endl;
    printName(i+1, n);
    // cout << i << endl;
}

//functional way
int findSum(int n) {

    if(n == 0) return 0;

    int sum = n + findSum(n-1);
    return sum;
}

//parameterized way
void findSum(int i , int sum) {

    if(i < 1){
        cout << sum;
        return;
    }

    findSum(i-1, sum + i);
}

int main() {

    int n = 5;
    // int ans = fact(n);
    // cout << ans << endl;

    // printName(1, n);
    // int ans = findSum(n);
    // cout << ans << endl;

    findSum(n , 0);
}