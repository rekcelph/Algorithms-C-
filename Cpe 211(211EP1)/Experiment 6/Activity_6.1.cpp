#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


void insertionSortAscending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void insertionSortDescending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    srand(time(0));
    int arr[20];
    int below50[20];
    int above50[20];
    int below50Count = 0;
    int above50Count = 0;

    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 100 + 1;
        if (arr[i] <= 50) {
            below50[below50Count++] = arr[i];
        } else {
            above50[above50Count++] = arr[i];
        }
    }

    
    insertionSortAscending(below50, below50Count);

    
    insertionSortDescending(above50, above50Count);

  
    cout << "Numbers below 50 in ascending order: ";
    for (int i = 0; i < below50Count; i++) {
        cout << below50[i] << " ";
    }
    cout << endl;

    cout << "Numbers above 50 in descending order: ";
    for (int i = 0; i < above50Count; i++) {
        cout << above50[i] << " ";
    }
    cout << endl;

    return 0;
}