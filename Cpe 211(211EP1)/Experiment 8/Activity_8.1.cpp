#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<string>& arr, int low, int high) {
  string pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return (i + 1);
}

void quickSort(vector<string>& arr, int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main() {
  cout << "Enter Ten Different things you see inside the classroom.\n";
  vector<string> items(10);
  for (int i = 0; i < 10; i++) {
    cout << i + 1 << ". ";
    cin >> items[i];
  }

  vector<string> ascending, descending;
  for (string item : items) {
    if (item[0] >= 'A' && item[0] <= 'M') {
      ascending.push_back(item);
    } else {
      descending.push_back(item);
    }
  }

  quickSort(ascending, 0, ascending.size() - 1);
  quickSort(descending, 0, descending.size() - 1);

  cout << "Data from (A - M): ";
  for (int i = 0; i < ascending.size(); i++) {
    cout << ascending[i];
    if (i < ascending.size() - 1) {
      cout << ", ";
    }
  }
  cout << endl;

   cout << "Data from (N - Z): ";
    for (int i = 0; i < descending.size(); i++) {
      cout << descending[i]; 
      if (i < descending.size() - 1) { 
        cout << ", ";
      }
    }
    cout << endl;
}