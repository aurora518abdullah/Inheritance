#include<bits/stdc++.h>
using namespace std;

class Employee
{
public:
    void display1(){
    cout<<"EMLPOYEE WON"<<endl;}
};
class Programmer : public Employee {
public:
 void display2(){
        cout<<"PROGRAMMER WON"<<endl;}

};

class Developer : public Employee {
public:
 void display3(){
        cout<<"DEVOLOPER WON"<<endl;}

};
class name: public Developer{
public:
 void display4(){
    cout<<"ABDULLAH WON"<<endl;}

};

int main()
{
    Programmer ob;
    ob.display1();
    ob.display2();

    name a;
    a.display1();
    a.display3();
    a.display4();


    return 0;
}
