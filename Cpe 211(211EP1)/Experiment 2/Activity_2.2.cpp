#include <iostream>
using namespace std;

int main()
{
    
 int row,coll;
 int arr[6][6] = { {0,0,0,0,0,},
                 {0,1,2,34,34,},
                 {0,2,4,4,6,},
                 {0,3,6,4,6,},
                 {0,4,8,77,89,},
                 {0,5,9,12,45,}
                 };
for ( int i = 1; i <= 5; i++)
{
    for ( int x = 1; x <= 5 ; x++)
    {
        cout<<arr[i][x] << " ";
    }
    cout<< endl;
}

 cout <<"Enter Value of row : ";
 cin >> row;
 cout <<"Enter Value of Column : ";
 cin>> coll;
 cout << "The number of in row [1] column [2] is: ";
 cout << arr[row][coll];
 return 0;
}