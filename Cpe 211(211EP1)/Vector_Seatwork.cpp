//VECTOR SEATWORK
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers;

 
    for (int i = 0; i < 5; i++) {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        numbers.push_back(num);
    }


    sort(numbers.begin(), numbers.end());

  
    reverse(numbers.begin(), numbers.end());

    
    cout << "Numbers in descending order: ";
    for (auto num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}