// #include <iostream>
// using namespace std;

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
#include <iostream>
using namespace std;

int main() {
    int t,n,i;
    cin >> t;
	while(t--){
	    cin >>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        int m= INT16_MIN;
        for(int i=0;i<n;i++){
            if(m<a[i]){
                m=a[i];
            }
        }cout << m <<endl;
	}
	return 0;
}



















