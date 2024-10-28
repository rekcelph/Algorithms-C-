#include <iostream>
#include <iomanip>
using namespace std;

void getSales(double *arr, int size, string period)
{
 for (int count = 0; count < size; count++)
 {
 cout << "Enter the sales figure for quarter " << period << (count + 1) << ": "<< endl;
 cin >> arr[count];
 }
}
double totalSales(double *arr, int size)
{
 double sum = 0.0;
 for (int count = 0; count < size; count++)
 {
 sum += *arr;
 arr++;
 }
 return sum;
}
int main()
{
    int choice;
    cout << "Enter '1' for Annually " << endl;
    cout << "Enter '2' for Semi-Annually " << endl;
    cout << "Enter '3' for Monthly " << endl;
    cout << "Enter '4' for Quarterly " << endl;
    cout <<"Choose a a period: " << endl;
    cin >> choice;
    


    int size = 0;
    string period;
    switch (choice)
    {
    case 1:
        size = 1;
        period = "Annually ";
        break;
    
    case 2:
        size = 2;
        period = "SemiAnnually ";
        break;
    
    case 3:
        size = 12;
        period = "Monthly ";
        break;
    
    case 4:
        size = 4;
        period = "Quarterly ";
        break;

    default:
        cout << "Invalid choice" << endl;
        return 1;
    }
 double sales[size];
 getSales(sales, size, period);
 cout << setprecision(2);
 cout << fixed << showpoint;
 cout << "The total sales for the year in " << period <<" is " <<"$ ";
 cout << totalSales(sales, size);
 return 0;
}
