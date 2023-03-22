#include "iostream"
using namespace std;

// data hiding , or read only 
class student {
    private:
        string name = "naveen";
        int roll;
        int age;

    public:
    //getter
    string getname(){
        return this ->name;
    }
};

int main(){
    student s1;
    cout << s1.getname() << endl;
    cout << "all ohk";
}