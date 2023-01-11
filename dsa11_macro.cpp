#include <iostream>
using namespace std;

void macro(){
    //A macro is a piece of code in a program 
    //that is replaced by the value of the macro. 
    //Macro is defined by #define directive.
    //Whenever a macro name is encountered by the compiler, 
    //it replaces the name with the definition of the macro
    #define PI 3.14
    int n =5;
    int area = PI * n *n;
    cout << area << endl;

}

void area(){
    // Macro definition
    #define AREA(l, b) (l * b)

    int l1 = 10, l2 = 5, area;
 
    // Find the area using macros
    area = AREA(l1, l2);
 
    cout << "Area of rectangle is: "<< area << endl;
}

int main(){
    macro();
    area();
}

