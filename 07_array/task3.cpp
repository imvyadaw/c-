//im_vyadaw//
#include <iostream>
using namespace std;
int totalchaiServed(int chai[],int size){
    int totalchai=0;
    for(int i;i<size;i++){
        totalchai+=chai[i];
    }
    return totalchai;

}
int main() {
    int chaiServed[7]={52,59,75,45,79,85,74};
    int total=totalchaiServed(chaiServed,7);
    return 0;
}

