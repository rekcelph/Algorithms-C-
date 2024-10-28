#include <iostream>
using namespace std;

int main(){
    int arr[4][5];
    int x,y;
    cout<< "Enter 20 numbers that you want to display in a 2D array";
    for ( x = 0; x < 4; x++)
    {
        for (  y= 0; y < 5; y++)
        {
            cout << "\narr["<< x << "]" << y << "]" << endl;
            cin >> arr[x][y];
        }
    }
    cout << "The 2D array is : \n";
    for (x=0; x < 4; x++){
        for ( y = 0; y < 5; y++)
        {
            cout <<"\t| "<< arr[x][y];
        }
        cout << endl;
    }
    
return 0;

}