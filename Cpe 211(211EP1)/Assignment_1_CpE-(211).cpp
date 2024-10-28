#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
    {
        int upperlimit;
        cout << "Enter an upper limit : " << endl;
        cin >> upperlimit;

        if (upperlimit > 0) 
        {
            int cols = sqrt(upperlimit); 
            if (cols*cols < upperlimit)// amu ni nga line gina adjust ang columns kung needed
            {
                cols++;
            }
            else if (cols > 6)// ari nga line is gina limit ko ko ang number of columns
            {
                cols = 6;
            }
            int rows = (upperlimit / cols); // amu ja ang ga calculate ka row kung needed tas ma devide sa upperlimit 
            if (upperlimit % rows != 0) //tas ang line nga ni ga issue kung may ramainder kag para mahold ya ang sobra
            {
                rows++;
            }
            //ari ya ang array nga gin copy ko kay sir
            int arr[rows][cols];//tawag ja kara is 2d array dimension
            int num = upperlimit;// para ni maumpisahan ang value ta nga upperlimit 

            for (int a = 0; a < rows; a++)
            {
                for (int b = 0; b < cols; b++)
                {
                    if (num > 0)
                    {
                        arr[a][b] = num--;//teh since num is greater than 0 ma descending order ni halin sa upperlimit
                    }
                    else
                    {
                        arr[a][b] = 0;// ari kung and num is not greater than 0 
                    }
                    
                }
            }
            for (int a = 0; a < rows; a++)
                    {
                       for (int b = 0; b < cols; b++)
                       {
                        int squared = pow(arr[a][b], 2);// ang ari raised to the power ni kuno gin sunod ko lang ni kay sir
                        cout << arr[a][b] << " = " << squared << " | ";
                       }
                       cout << endl;
                    }
        }
        else
        {
            cout << "Invalid" << endl;
        }
        cout << "Do you want to continue? (y/n)" << endl;
        cin >> choice;
    }   
}
    return 0;
}