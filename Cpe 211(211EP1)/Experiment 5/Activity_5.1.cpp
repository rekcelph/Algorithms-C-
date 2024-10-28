#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}


int main() {
    srand(time(0));
    char choice = 'y';
    while (choice == 'Y'||choice == 'y')
    {
        int randomNumber = rand() % 100 + 1;
    int guess;
    int lowGuesses[100], highGuesses[100], wrongGuesses[100];
    int lowCount = 0, highCount = 0, wrongCount = 0;
    int guessCount = 0; 

    cout << "GUESS THE RANDOM NUMBER!!!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

    if (guess < 1 || guess > 100) { 
        cout << "Invalid guess! Please enter a number between 1 and 100." << endl;
        continue; 
    }

    if (guess == randomNumber) {
        cout << "CORRECT CONGRATULATIONS!!" << endl;
        break;
    }
    else if (guess < randomNumber) {
        cout << "WRONG!! TOO LOW" << endl;
        lowGuesses[lowCount++] = guess;
    }
    else {
        cout << "WRONG!! TOO HIGH" << endl;
        highGuesses[highCount++] = guess;
    }
    wrongGuesses[wrongCount++] = guess;

    guessCount++; 

    if (guessCount == 5) { 
        cout << "You've reached the maximum number of guesses. Better luck next time!\n" << endl;
        break;
    }
}

    selectionSort(lowGuesses, lowCount);
    selectionSort(highGuesses, highCount);
    selectionSort(wrongGuesses, wrongCount);

    cout << "LOW GUESSED NUMBERS ARE: ";
    for (int i = 0; i < lowCount; ++i) {
        cout << lowGuesses[i] << " ";
    }
    cout << endl;

    cout << "HIGH GUESSED NUMBERS ARE: ";
    for (int i = 0; i < highCount; ++i) {
        cout << highGuesses[i] << " ";
    }
    cout << endl;

    cout << "WRONG GUESSED NUMBERS ARE: ";
    for (int i = 0; i < wrongCount; ++i) {
        cout << wrongGuesses[i] << " ";
    }
    cout << endl;
    cout << " Do you want to try guessing again?(y/n) : ";
    cin >> choice;
    }
    return 0;
}