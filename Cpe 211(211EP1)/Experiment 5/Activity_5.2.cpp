#include <iostream>
using namespace std;

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

void bubbleSort(string numbers[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}

int main() {
    string arr[6];

    cout << "Please enter a list of names...\n";
    char choice = 'y';
    while (choice == 'Y' || choice == 'y') {
        for (int i = 1; i < 6; i++) {
            cout << " " << i << " :";
            cin >> arr[i];
        }
        bubbleSort(arr, 6);

        cout << "\n\n\n\n";

        for (int x = 0; x < 6; x++) {
            cout << arr[x] << endl;
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
    }

    return 0;
}