#include<bits/stdc++.h>
using namespace std;

class A {
public:
    void display() {
        cout<<"Class A"<<endl;
    }
};

class B : public A {
public:
    void display() {
        cout<<"Class B"<<endl;
    }
};

class C : public B {
public:
    void display() {
        cout<<"Class C"<<endl;
    }
};

int main() {
    C obj;

    obj.display();
    obj.B::display();
    obj.A::display();

    return 0;
}
