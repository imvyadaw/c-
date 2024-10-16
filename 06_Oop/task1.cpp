//im_vyadaw//
#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    string deptment;
    string Roll_number;
    
};

int main() {
    Student s1;
    s1.name = "Vishal Yadaw";
    s1.deptment = "CSE";
    s1.Roll_number = "********";
    cout << "Name: " << s1.name << endl;
    cout << "Department: " << s1.deptment << endl;
    cout << "Roll_number: " << s1.Roll_number << endl;
    return 0;
}