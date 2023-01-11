#include "iostream"
#include "vector"
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int > arr ={6,4,2,10,5};
    int n =5;
    // int minIndex;
    // for(int i=0;i<n-1;i++){
    //    minIndex =i;

    //    for(int j= i+1;j<n;j++){
    //     if(arr[minIndex] > arr[j])
    //     {
    //         minIndex = j;
    //     }
    //    }
    //    swap(arr[minIndex] , arr[i]);
    // }
    // for(int v: arr){
    //     cout << v << " ";
    // }
    sort(arr.begin() , arr.end());
    for (int i :arr){
        cout << i << "  ";
    }

}

// void bubbleSort(vector<int>& arr, int n)
// {
//     for(int i=0;i<n-1;i++){
        
//         for(int j=0;j<(n-1-i);j++){
            
//             if(arr[j] > arr[j+1])
//             {swap(arr[j], arr[j+1]);}
            
//         }
//     }
// }

// int main(){
//     vector<int > arr ={10 ,4 ,5 ,2 ,3 ,6 ,1 ,3 ,6};
//     int m =3;
//     for()



// }








