// Modify the program written in Exercise 2a to use a while statement. 

#include <iostream>
using namespace std;

int main(){
    int i = 0;
    float rates[13] ={6.25,6.50,6.8,7.2,7.35,7.5,7.65,7.8,8.2,8.4,8.6,8.8,9.0};
    float* dispPt = rates;
    string address;
    
    while ( i < 13 )
    {
        cout << "rates[" << i << "] = " << &rates[13] << endl;
        cout << "Address of ["<< i <<"]: " << (dispPt+i) << endl;
        cout << "Changed addressed[" << i << "] = " << (dispPt + i) + 1 << endl;
        i++;
    }
    return 0;
}
