#include "Employee.h"

// Initialize static members
int Employee::count = 0;
const string Employee::company = "TechSolutions";

// Default constructor
Employee::Employee() {
    name = "Unknown";
    id = 0;
    salary = 0.0;
    count++;
}

// Parameterized constructor
Employee::Employee(string n, int i, float s) : name(n), id(i), salary(s) {
    count++;
}

// Copy constructor (Deep Copy)
Employee::Employee(const Employee& e) {
    name = e.name;
    id = e.id;
    salary = e.salary;
    count++;
}

// Destructor
Employee::~Employee() {}

// Display function
void Employee::show() const {
    cout << "\nCompany: " << company << endl;
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Salary: " << salary << endl;
}

// Static function
void Employee::showCount() {
    cout << "\nTotal Employees: " << count << endl;
}

// this pointer function
void Employee::setSalary(float s) {
    this->salary = s;
}

// Function returning object
Employee Employee::giveBonus() {
    Employee temp(*this);
    temp.salary = this->salary + 10000;
    return temp;
}
