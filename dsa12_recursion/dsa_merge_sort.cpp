#include "bits/stdc++.h"
using namespace std;


// void fun(int n){
//     if(n>2){
//         fun(n-1);
//         fun(n-2);
//         fun(n-3);
//     }
//     cout << n << endl;
// }
// int main(){
//     fun(5);
// }

//merge sort imp link "https://www.geeksforgeeks.org/merge-sort/"
void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    cout << "len-" << len1 << " " << len2 <<endl;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //printing
    for(int i =0;i<len1;i++){
        cout << first[i] << " ";
    } cout << "sec" << endl;

    for(int i =0;i<len2;i++){
        cout << second[i] << " ";
    } cout << endl;
    
    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }
     //printing
    cout << "array ";
    for(int i =0;i<7;i++){
        cout << arr[i] << " ";
    } cout << "nxt" << endl;


    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    cout << "value " << s << " " << e << endl;
    merge(arr, s, e);
    cout << "===========" <<endl;
}

int main() {

    int arr[7] = {3,7,0,1,5,8,3};
    int n = 7;

    mergeSort(arr, 0, n-1);
    cout << "final-";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}