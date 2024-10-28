// Create a C++ program to generate all odd numbers from 1 to upper 
// limit stored randomly in the array index. The program will not allow 
// duplicate value to be stored in the array. Display stored array in its actual index 
// position and in sorted ascending position.
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}
void removeDuplicates(int arr[], int& n) {
    quicksort(arr, 0, n - 1);

    int j = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[j++] = arr[i];
        }
    }
    n = j;
}

int main() {
    srand((unsigned)time(0));
    int limit;
    cout << "Enter a limit: ";
    cin >> limit;

    int nums[limit];
    for (int x = 0; x < limit; x++) {
        int num1 = (rand() % limit) + 1;
        if (num1 % 2 != 1) {
            nums[x] = ++num1;
        }
        else {
            nums[x] = num1;
        }
    }
        cout << "Before Sorting : " <<endl;
    for (int x = 0; x < limit; x++) {
        cout << nums[x] << " , ";
    }
    removeDuplicates(nums, limit);
        cout << "\nAfter sorting: " <<endl;
    for (int x = 0; x < limit; x++) {
        cout << nums[x] << ", ";
    }

    return 0;
}