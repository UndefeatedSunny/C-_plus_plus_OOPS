#include<iostream>

using namespace std;

// private:, public:, protected:
// Structures have all public by default
// classes have all private by default

class Employee {
    int emp_id;
    string name;
    float salary;
public:
    void getInput(void);
    void display(void);
    Employee();  //which is not taking any parameter
    Employee(int emp_id, string n, float salay);  //parameterized constructors
    Employee(const Employee &rhs); // Copy Constructor
};


void Employee::getInput(void) {
    cout << "\nEnter emp_id: ";
    cin >> emp_id;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Salary: ";
    cin >> salary;
}

void Employee::display(void) {
    cout << "\nEmp_id: " << emp_id;
    cout << "\nName: " << name;
    cout << "\nSalary: " << salary;
}

Employee::Employee()
{
    cout << "\nI am in default constructor..\n";
    emp_id = 0;
    name = "";
    salary = 0.0;
}
Employee::Employee(int id, string n, float sal) {
    cout << "\nI am in parameterized constructor..\n";
    emp_id = id;
    name = n;
    salary = sal;
}

Employee::Employee(const Employee &rhs) {
    cout << "\nI am in copy constructor..\n";
    emp_id = rhs.emp_id;
    name = rhs.name;
    salary = rhs.salary;
}

int main(void) {
    Employee e1; //default constructor
    cout << "Showing e1 with default initialization:" << endl;
    e1.display();

    Employee e2(101, "Milan", 1000000);

   cout << "\nShowing e2 with parameterized data: " << endl;
    e2.display();

    Employee e3 = e2;
    cout << "\nShowing e3 with copied data: " << endl;
    e3.display();

    Employee e4(e1);
    cout << "\nShowing e4 with copied data: " << endl;
    e4.display();

    return 0;
}
