

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
class dog{//tree wise inherite kirbe
public:
    void bark()
    {
        cout<<"dog is barking"<<endl;
    }
};
class Dogtype: public dog,public animal{
public:
    void cry()
    {
        cout<<"Bool dog is barking"<<endl;
    }

};

int main()
{
    Dogtype d;
    d.eat();
    d.bark();
    d.cry();
}
