#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
    int num;
    cout << "Enter how many numbers to reversed: ";
    cin >> num;

    if (num <= 30 && num > 0)
    {
        int arr[num];

        for (int x = 0 ; x < num; x++)
        {
            cout << "Enter number: ";
            cin >> arr[x];
        }
        cout << "Your numbers in reversed :  ";
        for (int y = 0; y < num; y++)
        {
            cout << arr[y];
            if (y < num - 1) 
            {
                cout << ", ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << "Number should be between 1 and 30." << endl;
    }
}

//    char choice[30];
//    cout <<"Enter how many numbers to 3reverse : ";
//    cin.getline(choice, 30);

//    cout <<"Enter your numbers : ";
//    cin.getline(choice, 30);
//    cout <<"Your numbers in reverse : ";
//    for (int x = 0; x < strlen(choice); x++) {
//         cout << choice[strlen(choice) - x - 1];
//         if (x < strlen(choice) - 1) {
//             cout << ",";
//         }
//     }
//     return 0;
// }
    


