#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Employee{
    public:
        Employee(string n, string d, int s): name(n), department(d), salary(s) {}
        string name;
        string department;
        int salary;    
};

void printAll(vector <Employee>& employees){
    for(const auto& e : employees){
        cout << "Name is " << e.name <<" department " << e.department << " salary " << e.salary << endl;
    }
}

int main(){
    vector <Employee> employees = {
        {"Elizaveta", "Medicine", 1000},
        {"Artem", "Driver", 500},
        {"Alex", "IT", 1000},
        {"Anatoly", "Lawyer", 800}
    };

    stable_sort(employees.begin(), employees.end(),
        [](const Employee& a, const Employee& b){
            return a.department < b.department;
        });
    stable_sort(employees.begin(), employees.end(),
        [](const Employee& a, const Employee& b){
            return a.salary < b.salary;
        });
    printAll(employees);
    return 0;
}
