#include <iostream>
using namespace std;


    struct leap_year
    {
        int year;

    };
    
    int main(){
 struct leap_year years;
 system ("COLOR F0");
 cout <<"\n\n";
 cout <<"\tLeap Year Checker Uisng Structure ";
 cout <<"\n\n";
 cout << "\tEnter Year: ";
 cin >> years.year;
 cout <<"\n ";

 if (years.year % 4 == 0 )
 {
   cout <<"\tThe Given Year " << years.year << " is a Leap year.";
 }
 if (years.year % 100 == 0  )
 {
   cout <<"\tThe Given Year " << years.year << " Not a Leap year.";
 }
 if (years.year % 400 == 0)
 {
   cout <<"\tThe Given Year " << years.year << " is a Leap year.";
 }
 else
 {
   cout << "\n\n";
   cout << "\tEND OF PROGRAM ";
   cout << "\n\n";
 }
return 0;
 }
 

        
    
    
    
        
        
        
    

  