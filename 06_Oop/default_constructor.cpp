//im_vyadaw//
#include <iostream>
#include <vector>
using namespace std;
class Student{
    public:
    string studentNmae;
    int roll_number;

    Student(){
        studentNmae="unknow";
        roll_number=56;
    }

    void studentInfo(){
        cout<<" studentName " <<studentNmae<<endl;
        cout<<"roll_number " <<roll_number<<endl;
    }
    
};

int main() {
    Student defaultCons;
    defaultCons.studentInfo();
    


    return 0;
}