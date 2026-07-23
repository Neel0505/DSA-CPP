#include<iostream>
#include<string>
using namespace std;

class Teacher {
    // Properties / attributes

private:
        double salary;

public:
    string name;
    string subject;
    string department;


    // methods / member functions
    void changeDepartment(string newDepartment) {
        department = newDepartment;
    }
// Setter for salary
    void setSalary(double newSalary) {
        salary = newSalary;
    }

    // Getter for salary
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1; // Constructor is called here, and memory is allocated for the object
    Teacher t2;

    t1.name = "John"; 
    t1.changeDepartment("Mathematics"); 



    cout << "Teacher 1: " << t1.name << ", Department: " << t1.department << endl;
    return 0;
}