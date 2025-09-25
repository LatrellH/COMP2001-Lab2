#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX_EMPS = 25;

struct EmpRec
{
    int empID;
    string empName;
    int salary;

};

class Employee
{
private:
    int maxEmps; // maximum number of employees allowed for this instance
    int noEmps; // actual number of employees stored in the array
    EmpRec employees[MAX_EMPS]; // array of employee records

public:
    Employee(string fileName, int maxEmployees); //Constructor prototype
    int findEmp(int id); // finds an employee by ID and returns the index or -1 if not found
    void showEmpRec(int index); // shows an employee record at the given index
    int getNoEmps() { return noEmps; } // returns the number of employees that are in the array
    void writeEmployees(ostream& out); // writes all employee records to the given output file or the screen
    void addEmp(int id, string name, int salary); // adds a new employee to the array
};
