// Write a program that stores the following numbers in the array named rates: 6.25,
// 6.50,6.8,7.2,7.35,7.5,7.65,7.8,8.2,8.4,8.6,8.8, and 9.0. Display the values in the array by
// changing the address in a pointer called dispPt. Use for loop statement in your program.
#include <iostream>
using namespace std;

int main(){
    float rates[13] ={6.25,6.50,6.8,7.2,7.35,7.5,7.65,7.8,8.2,8.4,8.6,8.8,9.0};
    float* dispPt = rates;
    string address;
    
    for(int i = 0; i < 13 ; i++){
        cout << "rates[" << i << "] = " << &rates[13] << endl;
        cout << "Address of ["<< i <<"]: " << (dispPt+i) << endl;
        cout << "Changed addressed[" << i << "] = " << (dispPt + i) + 1 << endl;
    }
    return 0;
}
