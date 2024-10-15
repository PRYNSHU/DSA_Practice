#include "bits/stdc++.h"
using namespace std;

// Exception handling in C++ consists of three keywords: try, throw and catch:

// The try statement allows you to define a block of code to be tested for errors while it is being executed.

// The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

// The catch statement allows you to define a block of code to be executed if an error occurs in the try block.

// The try and catch keywords come in pairs:


int main(){

    int x = -1;
    int y = 1;

    cout << "1 Before try \n";
    try {
        cout << "2 Inside try \n";
        if (x < 0)
        {
            throw x;
            cout << "3 After throw (Never executed) \n";
        }else{
            // throw y;
        }
    }
    catch (int x ) {
        cout << "4 Exception Caught= " << x << endl;
    }

    cout << "5 After catch (Will be executed) \n";
    return 0;

}

