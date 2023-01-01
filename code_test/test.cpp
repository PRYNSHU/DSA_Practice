#include <iostream>
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

















