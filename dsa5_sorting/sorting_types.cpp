#include "bits/stdc++.h"
using namespace std;

//smallest element will be its right position in each round
// void selectionSort(vector<int> &arr , int n){
//     for(int i =0; i< n-1 ;i++){
//         int mini =i;
        
//         for(int j = i+1; j < n;j++){

//             if(arr[j] <  arr[mini])
//                 mini = j; //mini is shift to j th position
//         }
//         swap(arr[i]  , arr[mini]);
//     }
// }

//i th largest element will be its right position in each round
// void bubbleSort(vector<int> &arr ,int n){
//     for(int i =0; i < n;i++){

//         for(int j =0 ;j< (n -i -1); j++){

//             if(arr[j] > arr[j+1])
//                 swap(arr[j]  , arr[j+1]);
//         }
//     }
// }

//card like sorting , and shifting
// void insertionSort(vector<int> &arr , int n){
    
//     for(int i =1;i < n;i++){

//         int temp = arr[i]; //temporary storage is needed , to avoid problems while shifting
//         int j = i-1;
//         while(j>=0){

//             if(arr[j] > temp)
//                 //shifting
//                 swap(arr[j+1] , arr[j]);
//             else 
//                 break;
//             j--;
//         }
//         cout << "j " << j << endl;
//         arr[j+1] = temp;
//     }
// }

//mergeSort is done in recursion part--

int main(){
    vector<int> arr = {5,9,3,6,7,1,2};
    int n = 7;
    // selectionSort(arr , n);
    // bubbleSort(arr , n);
    // insertionSort(arr , n);

    for(auto i: arr){
        cout << i << " " ;
    }
}