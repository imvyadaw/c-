//im_vyadaw//
#include <iostream>
#include <string>
using namespace std;
class Tea{
    public:
       virtual void prepareirements()=0;
       virtual void brew()=0;
       virtual void serve()=0;

       void makeTea(){
        prepareirements();
        brew();
        serve();
       }
};

//drived class
class GreenTea:public Tea{
public:
    void prepareirements() override{
        cout<<"Preparing Green Tea"<<endl;
    }

    void brew() override{
        cout<<"Brewing Green Tea"<<endl;
    }

    void serve() override{
        cout<<"Serving Green Tea"<<endl;
    }
};
class MasalaTea:public Tea{
public:
    void prepareirements() override{
        cout<<"Preparing Masala Tea"<<endl;
    }

    void brew() override{
        cout<<"Brewing masala Tea"<<endl;
    }

    void serve() override{
        cout<<"Serving Masala Tea"<<endl;
    }
        
};

int main(){
    GreenTea greenTea;
    MasalaTea masalaTea;
    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}