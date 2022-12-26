#include "list"
int main(){
    list<int > l;
    l.push_back(5);
    l.push_front(8);

    for(int i:l){
        cout << i << " ";
    }cout << endl;

    l.erase(l.begin());
    for(int i:l){
        cout << i << " ";
    }
    list <int> n(4,20);
    for(int j:n){
        cout << j << " ";
    }
}