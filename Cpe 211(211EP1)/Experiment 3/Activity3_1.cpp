
// Write a C++ that will ask a user how many numbers to enter. The program will not accept
// numbers above 100. The program will calculate the Average of the given numbers by the user
// then display the address of the Average and each number corresponds to its value. Store the
// numbers inside the array the create a pointers name (pt_Ave and pt_numbers)
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x;
    double num[100],sum = 0, average;
    double *ptr;
    ptr = num;
     cout <<"How many numbers do you want to calculate? " ;
     cin >> x;

     if (x > 100 || x <= 0){
        cout << "Number shoulf be in range of 1 to 100" << endl;
        cout << "Please enter a number again: " << x << endl;
        cin >> x;
     }
     for (int i = 0; i < x; i++)
     {
        cout << "Enter number  " << i + 1 << " : ";
        cin >> num[i];
        sum += num[i];
     }
     for (int i = 1; i < x+1; i++)
     {
        cout << "Address of ["<< i <<"]: " << (ptr+i) << endl;
     }
     average = sum / x;
     cout << "Average = " << average;
     cout << "\nAddress of average " << x << " : " << (ptr+x) << endl;
     

    return 0;
}

