//im_vyadaw//
#include <iostream>
#include <vector>
using namespace std;
class Student{
    public:
    string studentNmae;
    int roll_number;

    Student(string name ,int  roll_number){

        studentNmae=name;
        roll_number=roll_number;
    }

    void studentInfo(){
        cout<<" studentName " <<studentNmae<<endl;
        cout<<"roll_number " <<roll_number<<endl;

    }
    
};

int main() {
    Student obj("vishal",101);
    obj.studentInfo();

    return 0;
}