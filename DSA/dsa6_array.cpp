#include "iostream"
#include <bits/stdc++.h>
using namespace std;
//#include "vector"
// void reverseArray(vector<int> &arr , int m)
// {
//     int n = arr.size();
//      int s = m+1, e = n-1;
//     while(s<=e){
//         swap(arr[s] , arr[e]);
//         s++; 
//         e--;
//     }
    
// }


// int main(){
//     vector<int>  nums = {1,2,3,4,5,6,7};
//     int n= 7,k=3;
//         vector<int > temp;
//         cout << " ans is ";

//         for(int i =0;i<n;i++){
//             temp[(i+k)%n]= nums[i];
//         }
//         for(int j=0;j<n;j++){
//             cout << temp[j] << " ";
//         }
//         //nums = temp;
// }

// int main(){
//     vector<int > nums = {7,9,1,1,1,3};
//     int n =nums.size();
//         int temp = INT_MAX;
//         vector<int > t(n);
//         int m;
//         for(int i=0;i<n;i++){

//             if(nums[i]<=temp){
//                 temp =nums[i];
//                 m =i;
//             }
//         }
//         int k = n-m;
//         cout << m <<endl;
//         for(int j=0;j<n;j++){
//             t[(j+k)%n] = nums[j];
//         }
//         nums = t;  //nums is rotated such that mini is at 0 index
//         for(int i:nums){
//             cout << i << " ";
//         }
        
//         int inc =0;
//         for(int l=0;l<n-1;l++){
//             if(nums[l]<=nums[l+1]){
//                 inc++;
//             }
//         }
//         if(inc ==n-1){
//                 cout << " true";
//             }else
//             {
//                 cout << "false";
//             }
//     //another approach
//     int n =nums.size();
//         int count =0;
//         for(int i=1;i<n;i++){
//             if(nums[i-1]> nums[i]){
//                 count++;
//             }
//         }
//         if(nums[n-1] > nums[0]){
//                 count++;
//             }
//         return count<=1;
// }




























