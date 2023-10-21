#include <iostream>
using namespace std;

class animal{
    public:
    int age;
    string name;

    void speak(int a=4){
        cout << "speaking-"<< a << endl;
    }
};

class deer : public animal{
    public:
    //method overriding
    void speak(){
        cout << "not barking "<< endl;
    }
};

int main(){
    animal a;
    deer d;
    a.speak();
    d.speak();
}