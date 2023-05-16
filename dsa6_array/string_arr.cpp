#include"iostream"
#include "typeinfo"
using namespace std;

int getlen(char ch[]){
    int cnt =0;
    int i =0;
    while(ch[i] != '\0'){
        cnt++;
        i++;
    }
    return cnt;
}

void conversion(){

    char ch[10];
    cin >> ch;
    //convert to lowercase
    ch[1] = ch[1] -'A' + 'a';
    //convert to uppercase 
    ch[0] = ch[0] -'a' + 'A';
    ch[2] = ch[2] + 1;
    cout << "new " << ch << endl;
    //convert char to int
    char m = '3';
    m = m-'0';
    cout << m + 3 << endl;
}


int main(){

    char c = 'z'; // as a char element
    char ch[10];  // as a char array, which stores elements form 0 to 9
    cout << "print it" << endl;

    cin >> ch;
    cout << "any value " << ch[0] << endl; //print that element
    cout <<  "full value " << ch << endl;

    // ch[2] = '\0';        //null character ( to break the array)
    // cout << ch << endl; //print whole array
    int len = getlen(ch);
    cout << len << endl;

    swap(ch[0] , ch[len-1]);
    cout << ch << endl;

    // conversion();
    

}

