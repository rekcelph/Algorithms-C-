// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int squared;
//     char choice = 'y';
//     string z;
//     int x1 =0;
//     while (choice == 'y' || choice == 'Y')
//     {
//         int upper_limit;
//         cout << "Enter an upper limit: ";
//         cin >> upper_limit;
//         if (upper_limit<=30 && upper_limit >= 26)
//         {
//             int row = 6;
//             int col = 6;
//             int arr[row][col];
//             for(int a = 0; a < 6; a++)
//             {
//                 for(int b = 0; b < 6; b++)
//                 {
//                     arr[a][b] = upper_limit;
//                     upper_limit--;
//                     if(upper_limit < 0)
//                     {
//                         upper_limit = 0;
//                     }
//                 }
//             }
//             for(int a = 0; a < 6; a++)
//             {
//                 for(int b = 0; b < 6; b++)
//                 {
//                    squared = pow(arr[a][b], 2);
//                    cout << arr[a][b] << " = " << squared << " | ";
//                 }
//                 cout << endl;
//             }
            /*cout << num << " = " << num * num << " | "<<z;
            x1++;
            if(x1 >= 2){
                z = "\n";
                x1 -= 3;
            }
            else{
                z ="";
            }
        }
        else if (upper_limit<=4 && upper_limit >= 1){
        for (int num = 1; num <= upper_limit; num++)
        {
            cout << num << " = " << num * num << " | "<<z;
            x1++;
            if(x1 >= 1){
                z = "\n";
                x1 -= 2;
            }
            else{
                z ="";
            }
        }
        }
        else if (upper_limit<=16 && upper_limit >= 10){
        for (int num = 1; num <= upper_limit; num++)
        {
            cout << num << " = " << num * num << " | "<<z;
            x1++;
            if(x1 >= 3){
                z = "\n";
                x1 -= 4;
            }
            else{
                z ="";
            }
        }
        }
        else if (upper_limit<=30 && upper_limit >= 26){
        for (int num = 1; num <= upper_limit; num++)
        {
            cout << num << " = " << num * num << " | "<<z;
            x1++;
            if(x1 >= 5){
                z = "\n";
                x1 -= 6;
            }
            else{
                z ="";
            }
        }*/
//         }
//         cout << "\nDo you want to continue? (y/n): ";
//         cin >> choice;
        
//     }
    
//     return 0;
// }

/*
int rows = (25 / 5); // rows = 5
if (25 % 5 != 0) {
    rows++;
}
25 % 5 is 0, so this condition is false, rows remains 5
para maging 5 rows by 5 columns
*/

/*
int main() {
    int arr[4][3];
    int num = 10;


    for (int a = 0; a < 4; a++) {
        for (int b = 0; b < 3; b++) {
            if (num > 0) {
                arr[a][b] = num--;
            } else {
                arr[a][b] = 0;
            }
        }
    }

   
    for (int a = 0; a < 4; a++) {
        for (int b = 0; b < 3; b++) {
            int squared = pow(arr[a][b], 2);
            cout << arr[a][b] << " = " << squared << " | ";
        }
        cout << endl;
    }

    return 0;
}

*/