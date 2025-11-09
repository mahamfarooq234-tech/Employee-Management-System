#include <iostream>
#include "Employee.h"
using namespace std;

// Function to take object as argument
void printEmp(Employee e) {
    cout << "\nEmployee passed to function:";
    e.show();
}

int main() {
    cout << "=== TechSolutions Employee System ===\n";

    // Dynamic object
    Employee* e1 = new Employee("Ali", 1, 50000);
    e1->show();

    // Passing object to function
    printEmp(*e1);

    // Returning object from function
    Employee e2 = e1->giveBonus();
    cout << "\nObject returned from function:";
    e2.show();

    // Deep copy
    Employee e3 = *e1; // Copy constructor
    cout << "\nCopy constructor called!\n";
    cout << "\nBefore changing salary:\nOriginal Object:";
    e1->show();
    cout << "\nCopied Object:";
    e3.show();

    e1->setSalary(60000);
    cout << "\nAfter changing original salary:\nOriginal Object:";
    e1->show();
    cout << "\nCopied Object:";
    e3.show();

    // Static function
    Employee::showCount();

    delete e1; // free memory

    return 0;
}
