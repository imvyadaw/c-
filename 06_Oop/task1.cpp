//im_vyadaw//
#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    string deptment;
    string Roll_number;
    void  getdata(){
        cout << "Name: " <<name << endl;
        cout << "Department: " <<deptment << endl;
        cout << "Roll_number: " <<Roll_number << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Vishal Yadaw";
    s1.deptment = "B Tech CSE";
    s1.Roll_number = "**";
    s1.getdata();
    cout<<" "<<endl;

    Student s2;
    s2.name = "VYADAW";
    s2.deptment = "Diploma Cse";
    s2.Roll_number = "56";
    s2.getdata();
    return 0;
}