#include "bits/stdc++.h"
using namespace std;

//BUBBLE SORT
void sorting(int *arr , int n ){
    //base cond
    if(n ==0 || n == 1)
        return;
    
    //solve one case
    for(int i =0;i<n-1;i++){
        if(arr[i]> arr[i+1])
            swap(arr[i] , arr[i+1]);
    }

    //rec
    sorting(arr , n -1);
}
int main(){
    int arr[] = {2,5,12,6,9,1};
    sorting(arr , 6);

    for(int i:arr){
        cout << i << " ";
    }
}
