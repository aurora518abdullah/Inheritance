

#include<bits/stdc++.h>
using namespace std;
class animal
{
public:
    void eat()
    {
        cout<<"Animal is eating"<<endl;
    }
};
class dog : public animal{//tree wise inherite kirbe
public:
    void bark()
    {
        cout<<"dog is barking"<<endl;
    }
};
class cat:public animal{
public:
    void cry()
    {
        cout<<"cat is mewing"<<endl;
    }

};

int main()
{
    dog d;
    d.bark();
    d.eat();
    cat c;
    c.cry();
    c.eat();
}
