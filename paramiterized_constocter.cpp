#include<bits/stdc++.h>
using namespace std;
class Parent
{
public:
    Parent(int x){
        cout<<"Parent Value: "<<x<<endl;
    }
    ~Parent(){
        cout<<"Parent destactor "<<endl;
    }
};
class Child:public Parent
{
public:
    Child(int a) :Parent(a){
        cout<<"Child Constructor"<<endl;
    }
    ~Child(){
        cout<<"Child destactor"<<endl;
    }
};
int main()
{
    Child obj(50);
    return 0;
}
