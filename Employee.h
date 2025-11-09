
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float salary;

    // static and const members
    static int count;
    static const string company;

public:
    Employee();                               // Default constructor
    Employee(string n, int i, float s);       // Parameterized constructor
    Employee(const Employee& e);              // Copy constructor
    ~Employee();                              // Destructor

    void show() const;                        // Const function
    static void showCount();                  // Static function
    void setSalary(float s);                  // this pointer use
    Employee giveBonus();                     // return object

};


