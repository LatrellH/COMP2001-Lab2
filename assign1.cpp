#include "employee.h"

using namespace std;

int main()
{
    // Create Employee object with file name and max of 10 employees
    Employee empObj("employee.data", 10);

    // Display how many employees were loaded
    cout << "Number of employees loaded: " << empObj.getNoEmps() << endl;

    // Loop through and display each employee
    for (int i = 0; i < empObj.getNoEmps(); i++)
    {
        empObj.showEmpRec(i);
    }

    return 0;
}
