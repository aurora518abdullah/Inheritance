#include<bits/stdc++.h>
using namespace std;

class Parent {
public:
    void show() {
        cout<<"Parent Function"<<endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout<<"Child Function"<<endl;
    }
};

int main() {
    Child obj;

    obj.show();
    obj.Parent::show();//function overriding kome jay..
    //2 tai show korbe

    return 0;
}
