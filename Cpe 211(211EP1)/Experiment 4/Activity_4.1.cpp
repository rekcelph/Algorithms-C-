#include <iostream>
#include <string>
using namespace std;

struct Person {
    string Name;
    string Address;
    string DateOfBirth;
    string Program;
    int Age;

    Person(string name, string address, string dateOfBirth, string program, int age) 
    {
        Name = name;
        Address = address;
        DateOfBirth = dateOfBirth;
        Program = program;
        Age = age;
    }
    void displayInformation(string choice) 
    {
        cout << choice << "\n\nHere's your Info:" << endl;
        cout << "Name: " << Name << endl;
        cout << "Address : " << Address << endl;
        cout << "Date of Birth: " << DateOfBirth << endl;
        cout << "Program: " << Program << endl;
        cout << "Age: " << Age << " years old" << endl;
    }
};
int main() 
{
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        string name, address, dateOfBirth, program;
        int age;

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Student Address: ";
        getline(cin, address);

        cout << "Enter Student Date of Birth: ";
        getline(cin, dateOfBirth);

        cout << "Enter Student Program: ";
        getline(cin, program);

        cout << "Enter Student Age: ";
        cin >> age;
        cin.ignore();

        cout << "\n\nYour name is " << name << endl;
        cout << "You live in " << address << endl;
        cout << "Your Birth Date is on " << dateOfBirth << endl;
        cout << "Your Program is " << program << endl;
        cout << "Your Age " << age << " years old "<< endl;

        Person student(name, address, dateOfBirth, program, age);

        student.displayInformation("");

        cout << "Do you want to try again? (Y||N)" << endl;
        cin >> choice;
        cout << "Thank You";
        cin.ignore();
    }

    return 0;
}