//im_vyadaw//
#include <iostream>
#include <limits>
#include <string>
using namespace std;
int main() {
    string name;
    cout<<"enter your name: ";
    getline(cin,name);
    int age;
    while(true){
        cout<<"enter your age: ";
        if (cin>>age){
            if(age<=0|| age>101){
                cout<<"age is invalid please enter a value between 1 and 100"<<endl;
            } else
            {
                break;
            }
        }else{
            cout<<"invalid input please enter a numeric value"<<endl;
            cin.clear();
        }
    }
    if(age>=18){
        cout<<"your are eligible to vote."<<endl;
    }else{
        cout<<"you are not eligible to vote."<<endl;
    }
}


