#include <iostream>
using namespace std;

int main(){
    int num, i;
    cout <<"How many person do you want to enter their age ? ";
    cin >> num;

    int arr[num];

    for ( i = 0; i < num; i++)
    {
        cout << "Person " << i + 1 << " :";
        cin>>arr[i];  
    }
    cout << "The students that are below 18 years old are : ";
    for ( i = 0; i < num; i++)
    {
        if (arr[i] < 18)
        {
            cout <<" | "<< arr[i]<<" | ";
        } 
    }
    cout <<"\nStudents that are in legal age are: ";
    for ( i = 0; i < num; i++)
    {
        if (arr[i] > 18)
        {
            cout <<" | "<< arr[i]<<" | ";
        }
    }
    return 0;
    
    
    
}