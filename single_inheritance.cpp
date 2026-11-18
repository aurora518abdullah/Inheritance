
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
class dog: public animal{//ekta matro class e inheritanrt kirbe
public:
    void bark()
    {
        cout<<"dog is barking"<<endl;
    }
};

int main()
{
    dog d;
    d.eat();
    d.bark();
}
