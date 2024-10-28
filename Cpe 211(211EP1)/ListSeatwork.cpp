//LIST SEATWORK
#include <bits/stdc++.h>
using namespace std;

struct Person {
    string name;
    int age;
    string address;
};

void displayData(vector<Person>& persons, int choice) {
//Ang ari is gin gamitan ko sang lambda function, ara bala nga may box and chuchu
//kay gina gamit na to compare ang name sang 'a' kag 'b' in order ma check ya kung mauna bala ang a or b
// kag siyempre para ma arrange ya alphabeticaly.
    if (choice == 1) {
        sort(persons.begin(), persons.end(), [](const Person& a, const Person& b) {
            return a.name < b.name;                                                                                                               
        });
    } else if (choice == 2) {
        sort(persons.begin(), persons.end(), [](const Person& a, const Person& b) {
            return a.age < b.age;
        });
    } else if (choice == 3) {
        sort(persons.begin(), persons.end(), [](const Person& a, const Person& b) {
            return a.address < b.address;
        });
    }

    for (const auto& person : persons) {
        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        cout << "Address: " << person.address << endl;
        cout << endl;
    }
}

int main() {
    vector<Person> persons(3);
    char repeat = 'y';
    while (repeat == 'y' || repeat == 'Y') {
        for (int i = 0; i < 3; i++) {
            cout << "Enter name of person " << i + 1 << ": ";
            cin >> persons[i].name;
            cout << "Enter age of person " << i + 1 << ": ";
            cin >> persons[i].age;
            cout << "Enter address of person " << i + 1 << ": ";
            cin.ignore();
            getline(cin, persons[i].address);
        }

        int choice;
        cout << "Select a field to display the data in ascending order:" << endl;
        cout << "1. Name" << endl;
        cout << "2. Age" << endl;
        cout << "3. Address" << endl;
        cin >> choice;

        displayData(persons, choice);

        cout << "Do you want to continue? (y/n): ";
        cin >> repeat;
    }

    return 0;
}