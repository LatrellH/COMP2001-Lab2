#include "employee.h"

using namespace std;

int main()
{
    // Create Employee object with file name and max of 10 employees
    Employee empObj("employee.data");
    int searchID = 100;
    int position = emp.findEmp(searchID);
    if (position != emp.getNoEmps())
    {
        cout << "EmloyeeID " << searchID << "Employee found at position: " << position << endl;
    }
    else
        cout << "EmployeeID " << searchID << " not found" << endl;

    searchId = 999;
    position = emp.findEmp(searchId);
    if (position != emp.getNoEmps())
    {
        cout << "Employee with ID " << searchID << " found at position: " << position << endl;
    }
    else cout << "Employee with ID " << searchID << " not found" << endl;
    return 0;
    // Display how many employees were loaded
    cout << "Number of employees loaded: " << empObj.getNoEmps() << endl;

    // Loop through and display each employee
    for (int index = 0; index < empObj.getNoEmps(); index++)
    {
        empObj.showEmpRec(index);
    }
    return 0;
}
