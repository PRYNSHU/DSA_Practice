#include <bits/stdc++.h>
using namespace std;
   
// int main() {
//     int t,N,count ;
//     string S;
// 	cin >> t;
	
// 	for(int j=1;j<=t;j++){
// 	    cin >> N;
// 	    cin >> S;
//         count=0;
// 	    for(int i=0;i<N/2;i++){
// 	        if(S[i]==S[(N/2)+i]){
// 	            count +=1;
//             }
            
// 	    }
//         if(count == N/2){
//             cout << "YES";
//         }
//         else{
//             cout << "NO";
//         }
//             cout << endl;
// 	}
// 	return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int t,n,i;
//     cin >> t;
// 	while(t--){
// 	    cin >>n;
//         int a[n];
//         for (int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         int m= INT16_MIN;
//         for(int i=0;i<n;i++){
//             if(m<a[i]){
//                 m=a[i];
//             }
//         }cout << m <<endl;
// 	}
// 	return 0;
// }

////////////////////////////////////////////
// int firstOcc(int arr[], int n, int k){
//     int s =0, ans ;
//     int e= n-1;
//     int mid = s + (e-s)/2;
//     while(s<=e){ 
//         if(arr[mid]==k){
//             ans = mid;
//             e= mid-1;
//         }
//         else if(arr[mid]<k){
//             s= mid+1;
//         }
//         else{ e = mid-1;}
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int lastOcc(int arr[], int n, int k){
//     int s =0, ans ;
//     int e= n-1;
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(arr[mid]==k){
//             ans = mid;
//             s= mid +1;
//         }
//         else if(arr[mid]<k){
//             s= mid+1;
//         }
//         else{ e = mid-1;}
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int a[] = {1,2,2,2,2,2,3,3,3,3,5,6,7};
//     cout << "firstOcc" << firstOcc(a , 13 , 2) <<endl;
//     cout << "lastOcc" << lastOcc(a , 13 , 2);

// }

//#logic of the year
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         vector<int> res;
//         int tmp = 1;
//         for (int i = digits.size() - 1; i >= 0; i--) {
//             tmp += digits[i];
//             res.push_back(tmp % 10);
//             tmp /= 10;
//         }
//         if (tmp > 0) {
//             res.push_back(tmp);
//         }
//         for (int i = 0, j = res.size() - 1; i < j; i++, j--) {
//             swap(res[i], res[j]);
//         }
//         return res;
//     }
// };

// int main(){
//     vector<int> n = {12,3,4};
//     vector<int> t(4);
//     t.at(0) =5;
//     t.at(1) =4;
//     t.at(2) =6;
//     for(int j:t){
//         cout << j << " " ;
//     }
//     for(int i=0;i<n.size();i++){
//         t[i] = n[i];
//     }
//     cout << t.size();
    
//     cout <<"result ";
//     cout << t[0] <<endl;
//     for(int j:t){
//         cout << j << " " ;
//     }
// }
    
int main(){
    // vector<int> digits = {1,2,3};
    // int n = digits.size();
    // int t=1 , number =0;
    
    //     //array to digit
    //     for(int i =n-1;i>=0;i--){
    //         number = t*1 * digits[i] +number;
    //         t= t*10;
    //     }
    //     cout << number;
    
    int n = 1234;
    string s = to_string(n);
    cout << s.length();
}

int mySqrt(int x) {
    long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;

}


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int i =0;
        int m =1;
        while(i< arr.size()){
            //case 1
            if(arr[i] == m){
                m++;
            }
            //case 2
            else if(m > arr[i]){
                i++;
            } 
            //case 3
            else if(m < arr[i]){
                missing.push_back(m);
                if(missing[m] == missing[k-1]){
                    return missing[m];
                    break;
                }
                m++;
            }

        }

    }
};















