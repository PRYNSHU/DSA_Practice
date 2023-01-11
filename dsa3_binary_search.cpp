#include "iostream"
using namespace std;

int binarySearch(int arr[], int size , int key){
    int s=0, e= size-1; //start and end are index values
    int mid = (s+e)/2;

    while(s<=e){
        if(arr[mid]== key){
        return mid;
        }

        else if(key < arr[mid]){
            e= mid -1;
        }
        else if(key >arr[mid]){
            s = mid +1;
        }
        mid = (s+e)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4, (int)6.8 ,12,33,56};  //just an experiment
    int odd[7] = {1,2,3,4,5,6,7};

    int ans = binarySearch(odd , 7 , 6);
    int ans2 = binarySearch(even , 6, 4);
    cout << ans << " " << ans2;
}






