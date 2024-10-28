#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void countingSort(char arr[], int n, int exp) {
    char output[n];
    int count[256] = {0};

    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 256]++;
    }
    for (int i = 1; i < 256; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 256] - 1] = arr[i];
        count[(arr[i] / exp) % 256]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(char arr[], int n) {
    char max = *max_element(arr, arr + n);

    for (int exp = 1; max / exp > 0; exp *= 256) {
        countingSort(arr, n, exp);
    }
}

int main() {
    char line[150];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    cout << "Enter a line of string: ";
    cin.getline(line, 150);

    int n = strlen(line);
    char arr[n + 1];
    strcpy(arr, line);

    radixSort(arr, n);

    string digitStr, letterStr, symbolStr;
    for (int i = 0; i < n; ++i) {
        if (isdigit(arr[i])) {
            digitStr += arr[i];
        } else if (isalpha(arr[i])) {
            letterStr += arr[i];
        } else {
            symbolStr += arr[i];
        }
    }

    cout << "Unsorted: " << line << endl;
    cout << "Digits: " << digitStr << endl;
    cout << "Sorted Letters: " << letterStr << endl;
    cout << "Sorted Symbols: " << symbolStr << endl;

    return 0;
}
