// C++ program to create comparator using function pointer 
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 

// Custom comparison function 
// bool customComparison(int a, int b) 
// { 
// 	if(a > b ) return true;
//   else return false;
// } 

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
  return (a.second > b.second); //ascending order
} 


int main() { 
  vector< pair <int, int> > vect; 
    
  int arr[] = {0, 1, 5, 7 }; 
  int arr1[] = {3, 6, 2, 5}; 
  int n = sizeof(arr)/sizeof(arr[0]); 

  for (int i=0; i<n; i++) {
    vect.push_back( make_pair(arr[i],arr1[i]));
  }

  for(auto i : vect) {
    cout << i.first << " "<< i.second << endl;
  }
  cout << "--------" << endl;
  
  sort(vect.begin(), vect.end(), sortbysec);

  for(auto i : vect) {
    cout << i.first << " "<< i.second << endl;
  }


}





