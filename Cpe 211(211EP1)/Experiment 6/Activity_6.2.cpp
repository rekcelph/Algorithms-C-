#include <iostream>
#include <string>

using namespace std;

void insertionSort(string arr[], int n) {
    for (int i = 1; i < n; ++i) {
        string key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    char choice = 'y';
    while (choice == 'Y'||choice == 'y')
    {
        string names[5];
    cout << "\nEnter the names of your five classmates:\n" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Name " << i + 1 << ": ";
        cin >> names[i];
    }

    insertionSort(names, 5);

    cout << "\nNames sorted alphabetically:\n" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << names[i] << endl;
    }
    cout << "The middle element is.. " << names[2] << endl;
    cout << "Do you want to try again?? (y/n) : ";
    cin >> choice;
    }
    return 0;
}