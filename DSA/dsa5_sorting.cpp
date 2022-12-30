#include "iostream"
#include "vector"
using namespace std;


int main(){
    vector<int> arr ={6,4,2,10,5};
    int n =5;
    int minIndex;
    for(int i=0;i<n-1;i++){
        minIndex = i;

        for (int j= i+1;j<n;j++){

            if(arr[j]< arr[minIndex])
            minIndex = j;

        }
        swap(arr[minIndex] , arr[i]);
    }
    for(int v: arr){
        cout << v << " ";
    }
   
}
































































