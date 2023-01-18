#include <bits/stdc++.h>
using namespace std;

int partition(int arr[] , int s , int e){

    //value of p
    int count =0;
    for(int i = s+1;i<=e;i++){
        if(arr[i]<arr[s])
            count++;
    }
    //pivot at its right position
    int index = s + count;
    swap(arr[index] , arr[s]);

    //partition
    int i = s , j =e;
    while(i < index && j > index){
        while(arr[i] < arr[index]){
            i++;
        }

        while(arr[j] > arr[index]){
            j--;
        }

        swap(arr[i++] , arr[j--]);
    }
    return index;
}


void quicksort(int arr[] , int s , int e){
    //base cond
    if(s>=e) return;

    //partition
    int p = partition(arr , s, e);
    cout << p << endl;

    //left 
    quicksort(arr , s, p-1);

    //right
    quicksort(arr , p+1 , e);
}

int main(){
    int arr[12] = {5,2,4,3,8,7,6,4,22,1,0,6};
    int s =0, e = 11;
    
    quicksort(arr , s , e);
    cout << "sorted array is ";
    for(int j:arr){
        cout << j << " "; 
    }
}


