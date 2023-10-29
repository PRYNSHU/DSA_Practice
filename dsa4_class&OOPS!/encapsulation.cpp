#include "iostream"
using namespace std;

// data hiding , or read only 
class student {
    private:
        string name = "naveen";
        int roll;
        int age;

    public:
    //setter 
    void setname(string name){
        this->name = name;
    }
    // void setname(string name){
    //     name = name;
    // }

    //getter
    string getname(){
        return this ->name;
    }
};

int main(){
    student s1;
    s1.setname("shaam");
    cout << s1.getname() << endl;
    cout << "all ohk";
}