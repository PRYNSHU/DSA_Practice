#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n , int key){
    //base cond
    if(n == 0)
        return false;

    if(arr[0]== key)
        return true;
    else        
        return  linearSearch(arr +1, n-1, key);
}

void print(int arr[] , int s ,int e){

    for(int i = s;i<=e;i++){
        cout << arr[i] << " " ;
    }cout << endl;
}
bool binarySearch(int arr[], int s,int e, int key){

    print(arr , s,e);
    //base cond
    if(s>e)
        return false;

    int mid =s + (e-s)/2;

    if(arr[mid] == key)
        return true;

    //rec rel
    if(arr[mid] < key){     
        return binarySearch(arr, mid +1, e, key);
    }
    else
        return binarySearch(arr, s, mid -1, key);

}

int main(){
    int arr[] = {3,4,12,14,22};
    int n =5;
    int key =22;

    // if(linearSearch(arr , n ,key)){
    //     cout << "present" << endl;
    // }
    // else
    //     cout << "not present" << endl;

    if( binarySearch(arr , 0, 4,key) ){  
        cout << "present" << endl;
    }
    else
        cout << "not present" << endl;
}