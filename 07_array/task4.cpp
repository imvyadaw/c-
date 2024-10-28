 //im_vyadaw//
 #include <iostream>
 using namespace std;
int* prepareChaiorder(int cups){
    int* order = new int[cups];
    for(int i=0;i<cups;i++){
        order[i]=(i+1)*10;
    }
    return order;
}
 int main() {
    int cup=5;
    int* chaiOrder=prepareChaiorder(cup);
    for (int i=0;i<cup;i++){
        cout<<"Cups "<<chaiOrder[i]<<"\n ";
    }
    delete [] chaiOrder;

    return 0;
 }
