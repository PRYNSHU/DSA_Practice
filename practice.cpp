#include <bits/stdc++.h>
using namespace std;

// int main(){

//     vector<int> v(10 , 11);
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     //print
//     for(auto i : v){
//         cout << i << " ";
//     }
// }
int reverse(int x)
{

    // for plus
    if (x >= 0)
    {
        int n;
        string s = to_string(x);
        int i = 0, j = s.length() - 1;

        while (i <= j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        n = stoi(s);
        if (n > INT_MAX)
            return 0;
        else
            return n;
    }
    return 99;
}
// int main(){
//     // cout << reverse(INT_MAX);
//     int x = -99;
//     cout << abs(x);
//     // int a = 2234;
//     // string s = to_string(a);
//     // cout << s[1];
//     // string g= "334hello";
//     // int b = stoi(g);
//     // cout << b << endl;
//     // cout << typeid(b).name();

//     // swap(g[0], g[7]);
//     // cout << g;
// }
void fun()
{

    int x = 10;
    static int y = 10;
    x += 10;
    y += 10;
    cout << x << " " << y << endl;
}
class gfg
{
public:
    static int a;
};

void selectionSort(vector<int> &arr)
{

    // sort(arr.begin() , arr.end());
    // selection sort
    // take mini ele & swap with it index 0 and so on.

    int n = arr.size();
    for(int i =0;i<n-1;i++){
        int mini = INT_MAX;
        int index =0;
        
        for(int j = i+1;j<n;j++){
            //mini ele
            if(mini > arr[j]){
                mini = arr[j];
                index = j;
            }

        }
        swap(arr[index] , arr[i]);
        
    }
}

// int main()
// {

//     vector<int> arr = {2, 13, 4, 1, 3, 6};

//     selectionSort(arr);
//     for (int i : arr)
//     {
//         cout << i << " ";
//     }
// }
// int main(){
//     cout << "one: ";
//     fun();
//     cout << "second: ";
//     fun();
//     gfg obj1;
//     obj1.a = 3;
//     cout << obj1.a << endl;
// }

// class GfG {
// public:
//     static int i;
 
//     GfG(){
//         // Do nothing
//     };
// };

// int GfG :: i =1;
// int main()
// {
//     GfG obj1;
//     GfG obj2;
//     // obj1.i = 2;
//     // obj2.i = 3;
 
//     // prints value of i
//     cout << obj1.i << " " << obj2.i ;
// }

class GfG {
    int i;
 
public:
    GfG()
    {
        i = 0;
        cout << i <<  " Inside Constructor\n";
    }
    ~GfG() { cout << "Inside Destructor\n"; }
};
 
// int main()
// {
//     int x = 0;
//     // if (x == 0) {
//     //     GfG obj;
//     // }
//     if(x ==0)
//     {static GfG obj;
//     GfG obj2;}

//     cout << "End of main\n";
// }

// C++ code to illustrate Methods returning 
// a value using return statement 

// non-void return type 
// function to calculate sum 
int SUM(int a, int b) 
{ 
	int s1 = a + b; 
    cout << "hello" ;
	// method using the return 
	// statement to return a value 
	return s1; 
    cout << "bro";
} 

void merge(int *arr, int l, int mid , int h){

    
    
}

//MERGE SORT
void mergesort(int *arr , int l , int h){

    //base
    if(l == h) return;
    int mid = (l+h)/2;

    mergesort(arr, l, mid);
    mergesort(arr, mid+1, h);

    //merge
    // merge(arr, l, mid, h);

}
// void fun1(int &n1){
//     n1 = NULL;
// }
// int main(){

//     // int arr[5] = {3,2,4,1,3};

//     // // mergesort(arr, 0, 4);
//     // int n;
//     // fun1(&n);
//     // cout << n << endl;

//    cout << "hello kamal ";

// }


// int main(){

//     int l , m;
//     cin >> l >> m;
//     int sum =0;
//     int arr[l];  int v =0;
//     while(l--){
//         sum = sum + (v*v +1)%m;

//     }
//     cout << sum%m;
// }

// class Solution
// {
//     public:
//     //Function to reverse words in a given string.
//     // string reverseWords(string S) 
//     // {
//     //     string ans = "";
//     //     for(int i = S.length() -1; i>=0; i--){
            
//     //         if(S[i] == '.' || i == 0){
//     //             int j;
//     //             j = i + 1;
//     //             if(i == 0)
//     //                 j = 0;
//     //             while(S[j] != '.' && j < S.length()){
//     //                 ans += S[j];
//     //                 j++;
//     //             }
//     //             if(i !=0)
//     //                 ans += '.';
//     //         }
//     //     }
//     //     return ans;
//     // } 
//       string reverseWords(string S) 
//     { 
//         vector<string> v(S.size());
//         int i=0;
//         cout << "vector " << v.size() << endl;
//         for(auto x:S)
//         {
//             if(x=='.') i++;
//             v[i]+=x; cout << "v--"<< i  << v[i] << endl;
//             if(x=='.') i++;
//         }
//         cout <<"one" << endl;
//         for(auto m : v){
//             cout << m << " ";
//         }cout << endl;
//         string ans;
//         for(int j=v.size()-1;j>=0;j--) ans+=v[j];
//         return ans;
//     }
// };

//{ Driver Code Starts.
// int main() 
// {
//     int t;
//     cin >> t;
//     while (t--) 
//     {
//         string s;
//         cin >> s;
//         cout << s.size() << endl;
//         Solution obj;
//         cout<<obj.reverseWords(s)<<endl;
//     }


// }
// } Driver Code 

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string strs[], int n)
    {
        int i =0,j =0;
        // int n = strs.length();
        string ans = "";
        cout << "while" ;
        while(i<n-1 && j< strs[0].length()){
            cout << i << " ";
            if(strs[i][j] == strs[i+1][j]){

                if(i == n-2){
                    ans += strs[i][j];
                    cout << ans << endl;
                    i =0;
                    j++;
                }
            }else
                break;

            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        cout << "write" << endl;
        // for (int i = 0; i < n; i++)
        //     cout << arr[i] << " ";
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}


// } Driver Code Ends



