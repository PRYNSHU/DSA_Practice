#include "bits/stdc++.h"
using namespace std;

void hashing(){
    

    //array hashing
    int n =10;
    int arr[n] = {1,2,5,4,2,2,3,5,2,8};

    //code
    int hsh[10] = {0};
    for(int i =0;i<n;i++){
        hsh[arr[i]]++;
    }

    int f;
    cin >> f;
    cout << hsh[f] << endl;

}

void map_hashing(){
    int n =10;
    int arr[n] = {1,2,5,4,2,2,3,5,2,8};
    map<int , int> mpp;

    for(int i =0;i<n;i++){
        mpp[arr[i]]++;
    }
    cout << mpp[2];

}
void frequencyCount(vector<int>& arr,int N, int P)
    { 
        int hah[P+1] = {0};
        for(int i =0;i<N;i++){
            hah[arr[i]]++;
        }
        
        for(int j =1;j<=P;j++){
            cout << hah[j] << " ";
        }
    }

int main(){
    // hashing();
    // map_hashing();
    vector<int> arr = {2,3,2,3,5};
    frequencyCount(arr, 5,5);
   
}





