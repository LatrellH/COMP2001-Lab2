#include "employee.h"

using namespace std;

// Constructor implementation
Employee::Employee(string filename, int maxEmployees)
{
    // Validate maximum employees
    if (maxEmployees <= 0 || maxEmployees > MAX_EMPS)
    {
        // If invalid, assign default value
        maxEmps = MAX_EMPS;
    }
    else
    {
        maxEmps = maxEmployees;
    }

    noEmps = 0; // start with zero employees

    ifstream inputFile(filename);
    if (!inputFile)
    {
        cout << "Error: Unable to open file " << filename << endl;
        exit(1);
    }

    // Read employee records from file into array
    for (int i = 0; i < maxEmps; i++)
    {
        if (!(inputFile >> employees[noEmps].empID
            >> employees[noEmps].empName
            >> employees[noEmps].salary))
        {
            break; // stop if there’s no more data
        }
        noEmps++;
    }

    inputFile.close();
}

// Finds an employee by ID
int Employee::findEmp(int id)
{
    for (int i = 0; i < noEmps; i++)
    {
        if (employees[i].empID == id)
            return i;
    }
    return -1;
}

// Shows an employee record
void Employee::showEmpRec(int index)
{
    if (index >= 0 && index < noEmps)
    {
        cout << "ID: " << employees[index].empID
            << ", Name: " << employees[index].empName
            << ", Salary: " << employees[index].salary << endl;
    }
}

// Writes all employee records
void Employee::writeEmployees(ostream& out)
{
    for (int i = 0; i < noEmps; i++)
    {
        out << employees[i].empID << " "
            << employees[i].empName << " "
            << employees[i].salary << endl;
    }
}

// Adds a new employee
void Employee::addEmp(int id, string name, int salary)
{
    if (noEmps < maxEmps)
    {
        employees[noEmps].empID = id;
        employees[noEmps].empName = name;
        employees[noEmps].salary = salary;
        noEmps++;
    }
    else
    {
        cerr << "Error: Maximum number of employees reached!" << endl;
    }
}
