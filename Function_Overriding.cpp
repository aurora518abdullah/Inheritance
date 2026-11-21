#include<bits/stdc++.h>
using namespace std;
// parents ar child er 2 tar e name same hole function er.
// tokhon take funtrion overriding bole..
class Parent {
public:
    void show() {
        cout<<"Parent Class"<<endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout<<"Child Class"<<endl;
    }
};

int main() {
    Child obj;
    obj.show();//only child tai show korbe..

    return 0;
}
