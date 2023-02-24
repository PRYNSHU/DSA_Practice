#include <bits/stdc++.h>
using namespace std;

//linear search by for loop
// int main(){
//     int arr[8] = {5,6,9,8,15,3,28,22};
//     int n = sizeof(arr)/4;
//     int key;
//     cin >> key;

//     for(int i =0;i<n ;i++){
//         if(key == arr[i])
//             cout << "found " << i;
//     }
// }

//by recursion method

// int linearsearch(int arr[] , int key,  int n){
//     //base cond
//     if(n==0)
//         return 0;
    
//     //rec. rel
//     if(arr[0] == key)
//         return key;
//     else
//         return linearsearch(arr + 1 , key , n-1);
// }

// int main(){
//     int arr[8] = {5,6,9,8,15,3,28,22};
//     int n = sizeof(arr)/4;
//     int key;
//     cin >> key;

//     int index = linearsearch(arr,key ,n);
//     cout << index;

// }

//binary search by rec rel

int binarySearch(int arr[] , int n , int key){

}

int main(){
    int odd[7] = {1,2,3,4,5,6,7};

    int ans = binarySearch(odd , 7 , 6);
    cout << ans;
}