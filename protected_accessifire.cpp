#include<bits/stdc++.h>
using namespace std;

class Employee
{
protected:
    int salary;

public:
    Employee(){
        salary = 0;
    }
};
class Programmer : public Employee {
public:
    int bonus;

    void setSalary(int s) {
        salary = s;
    }

    int getSalary() {
        return salary;
    }
};

class Developer : public Employee {
public:
    void add(int a) {
        salary += a;
    }

    int get() {
        return salary;
    }
};

int main()
{
    Programmer myObj;

    myObj.setSalary(50000);
    myObj.bonus = 15000;

    Developer a;
    a.add(500);
    a.add(400);

    cout << "Developer Salary: " << a.get() << endl;

    cout << "Salary: " << myObj.getSalary() << endl;
    cout << "Bonus: " << myObj.bonus << endl;

    return 0;
}

