 #include <iostream>
 using namespace std;

int main() {
    cout << "Welcome to CEL HOTEL DE ILOILO" << endl;    
    int occupied[7][11] = {
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0},
        {1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0},
        {1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0},
        {0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1},
        {0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0},
    };

    cout << "Room availability:" << endl;
    for (int i = 1; i < 7; i++) {
        cout << "floor " << i << " ";
        for (int j = 1; j < 11; j++) {
            cout << "Room " << j << " - " << occupied[i][j] << " ";
        }
        cout << endl;
    }

    char repeat = 'y';
    while (repeat == 'y' || repeat == 'Y') {
        int floor, room;
        int choice;
        cout << "Select Room Type: " << endl;
        cout << "1. Luxury Rooms" << endl;
        cout << "2. Standard Rooms" << endl;
        cout << "3. Economy Rooms" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        string roomType;
        char choice2 = 'y';
        while (choice2 == 'y' || choice2 == 'Y') {
            switch (choice) {
                case 1:
                    roomType = "Luxury";
                    for (int i = 1; i < 3; i++) {
                        cout << "floor " << i << " ";
                        for (int j = 1; j < 11; j++) {
                            cout << "Room " << j << " - " << occupied[i][j] << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 2:
                    roomType = "Standard";
                    for (int i = 3; i < 5; i++) {
                        cout << "floor " << i << " ";
                        for (int j = 1; j < 11; j++) {
                            cout << "Room " << j << " - " << occupied[i][j] << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 3:
                    roomType = "Economy";
                    for (int i = 5; i < 7; i++) {
                        cout << "floor " << i << " ";
                        for (int j = 1; j < 11; j++) {
                            cout << "Room " << j << " - " << occupied[i][j] << " ";
                        }
                        cout << endl;
                    }
                    break;
                default:
                    cout << "Invalid choice. Exiting program." << endl;
                    return 1;
            }

            cout << "Pick a Floor: ";
            cin >> floor;
            cout << "Pick a Room: ";
            cin >> room;

            if (floor < 1 || floor > 6) 
            {
                cout << "Sorry, our hotel only has 6 floors." << endl;
            } 
            else if (room < 1 || room > 10) 
            {
                cout << "Sorry, but we only have 10 available rooms on each floor." << endl;
            } 
            else if (occupied[floor][room] == 1) 
            {
                cout << "Sorry, but the room is already occupied." << endl;
            } 
            else 
            {
                cout << "You have chosen a " << roomType << " room on floor " << floor << " with room number " << room << "." << endl;
            }
            cout << "Do you want to book another room of the same type? (y/n): ";
            cin >> choice2;
        }
        cout << "Do you want to select another room type? (y/n): ";
        cin >> repeat;
    }
    return 0;
}
