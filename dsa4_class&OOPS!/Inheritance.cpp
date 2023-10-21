#include "iostream"
using namespace std;

class human{
    public:
    string name = "koyal";
    int age;
    float weight;

    public:
    
    //setter
    void setage(int a){ 
        this->age = a; 
    }
    void print(){
        cout << "printed-"  << age << endl;
    }
    
};

class male: public human{
    public:
        void employee(){
            cout << "employee--" << name << " " << this->age << endl;
        }
};

class female: protected human{
    //protected is similar to private but accessible to its child class
    //getter
    public:
    void setage(int a){this-> age = a;}
    int getage(){
        return this-> age;
    }
};

int main(){
    human h1 ,h2;
    h1.setage(20);
    cout << "h1-" << h1.age << endl;
    cout << "h2-" << h2.age << endl; //(this) is only for current obj;
    
    male m1;
    m1.print(); 
    m1.setage(40);
    m1.print();
    cout << endl;

    m1.employee();
    cout << m1.age << endl;
    cout << "all good" << endl;

    cout << "==female==" <<endl;

    female f1; f1.setage(22);
    cout << f1.getage() << endl;
}