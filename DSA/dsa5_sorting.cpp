#include "iostream"
#include "vector"
using namespace std;

int main(){
    vector<int> arr ={6,4,2,10,5};
    vector<int > g;
    int n =5;
    int minIndex;
    for(int i=0;i<=n-1;i++){
        minIndex = arr[i];

        for (int j= i+1;j<=n;j++){

            if(arr[j]< minIndex)
            minIndex = arr[j];
            
        }
        swap(minIndex , arr[i]);
        g.push_back(arr[i]);
    }
    for(int v: g){
        cout << v << " ";
    }
   
}
































































