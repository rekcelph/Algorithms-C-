#include <iostream>
#include <fstream>
#include <sstream>
#include <conio.h>

using namespace std;

struct Node {
    string name;                
    long long int phone_number; 
    Node *next;
    Node *prev;
};

// Class for managing the contact book
class ContactBook {
    Node *head;  // Head of the linked list for contacts

public:
    ContactBook() : head(NULL) {}

    // Create a new contact node
    void CreateNode() {
        Node *newer = new Node;
        cout << "  Name of Contact: ";
        cin >> newer->name;
        cout << "  Phone Number: ";
        cin >> newer->phone_number;
        
        newer->next = NULL;
        
        // If list is empty, set new node as head
        if (head == NULL) {
            newer->prev = NULL;
            head = newer;
        } else {
            Node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newer;
            newer->prev = temp;
        }
        
        cout << "  Contact Added" << endl;
    }

    // Display all contacts
    void Display() {
        Node *temp = head;
        int count = 0;

        if (temp == NULL) {
            cout << "  No Contacts... Please Add Some Contacts" << endl;
            return;
        }

        BubbleSort(); // Sort contacts before displaying
        cout << "__________" << "           ___________" << endl;
        cout << "|  Name: |" << "           | Number: |" << endl;
        cout << "|________|" << "           |_________|" << endl;

        while (temp != NULL) {
            count++;
            cout << "  " << temp->name << "                  " << temp->phone_number << endl;
            temp = temp->next;
        }
        cout << "\t\t\t\t\t (Total contacts: " << count << ")" << endl;
    }

    // Search for a contact
    void Search() {
        int command;
        cout << "***********" << endl;
        cout << "  Press 1 to Search By Name." << endl;
        cout << "  Press 2 to Search By Number." << endl;
        cout << "  Enter the Command: ";
        cin >> command;

        Node *temp = head;
        bool found = false;

        if (command == 1) {
            cout << "  Enter the Name to Search: ";
            string name;
            cin >> name;

            while (temp != NULL) {
                if (temp->name == name) {
                    cout << "***********" << endl;
                    cout << "  Name: " << temp->name << endl;
                    cout << "  Phone Number: " << temp->phone_number << endl;
                    cout << "***********" << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        } else if (command == 2) {
            cout << "  Enter the Number to Search: ";
            long long int number;
            cin >> number;

            while (temp != NULL) {
                if (temp->phone_number == number) {
                    cout << "***********" << endl;
                    cout << "  Name: " << temp->name << endl;
                    cout << "  Phone Number: " << temp->phone_number << endl;
                    cout << "***********" << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        }

        if (!found) {
            cout << "  Contact Not Found" << endl;
        }
    }

    // Delete all contacts
    void DeleteAllContacts() {
        Node *temp = head;
        while (temp != NULL) {
            Node *toDelete = temp;
            temp = temp->next;
            delete toDelete;
        }
        head = NULL;
        cout << "  Successfully Deleted All Contacts" << endl;
    }

    // Delete a contact by search
    void DeleteContactBySearch() {
        int command;
        cout << "  Press 1 to Search By Name" << endl;
        cout << "  Press 2 to Search By Number" << endl;
        cout << "  Enter the Command: ";
        cin >> command;

        Node *temp = head;
        bool found = false;

        if (command == 1) {
            cout << "  Enter the Name to Delete: ";
            string name;
            cin >> name;

            while (temp != NULL) {
                if (temp->name == name) {
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        } else if (command == 2) {
            cout << "  Enter the Number to Delete: ";
            long long int number;
            cin >> number;

            while (temp != NULL) {
                if (temp->phone_number == number) {
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        }

        if (found) {
            if (temp == head) {
                head = head->next;
                if (head) head->prev = NULL;
            } else {
                if (temp->next) {
                    temp->next->prev = temp->prev;
                }
                temp->prev->next = temp->next;
            }
            delete temp;
            cout << "  Contact Deleted Successfully" << endl;
        } else {
            cout << "  Contact Not Found." << endl;
        }
    }

    // Bubble Sort contacts by name
    void BubbleSort() {
        if (!head) return; // If the list is empty, do nothing

        for (Node *i = head; i->next != NULL; i = i->next) {
            for (Node *j = i->next; j != NULL; j = j->next) {
                if (i->name > j->name) {
                    swap(i->name, j->name);
                    swap(i->phone_number, j->phone_number);
                }
            }
        }
    }

    // Edit a contact
    void EditContacts() {
        int command;
        cout << "***********" << endl;
        cout << "  Press 1 to Search By Name" << endl;
        cout << "  Press 2 to Search By Number" << endl;
        cout << "  Enter the Command: ";
        cin >> command;

        Node *temp = head;
        bool found = false;

        if (command == 1) {
            cout << "  Enter the Name to Edit: ";
            string name;
            cin >> name;

            while (temp != NULL) {
                if (temp->name == name) {
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        } else if (command == 2) {
            cout << "  Enter the Number to Edit: ";
            long long int number;
            cin >> number;

            while (temp != NULL) {
                if (temp->phone_number == number) {
                    found = true;
                    break;
                }
                temp = temp->next;
            }
        }

        if (found) {
            cout << "  Enter New Name: ";
            cin >> temp->name;
            cout << "  Enter New Number: ";
            cin >> temp->phone_number;
            cout << "  Contact Edited Successfully" << endl;
        } else {
            cout << "  Contact Not Found" << endl;
        }
    }

    // Save contacts to a file
    void OflineSave() {
        ofstream myfile("contactbook.txt");
        if (myfile.is_open()) {
            Node *temp = head;
            while (temp != NULL) {
                myfile << temp->name << endl;
                myfile << temp->phone_number << endl;
                temp = temp->next;
            }
            myfile.close();
        } else {
            cout << "  Unable to open file." << endl;
        }
    }

    // Reopen and load contacts from file
    void reopenCB() {
        ifstream myfile("contactbook.txt");
        if (myfile.is_open() && myfile.peek() != EOF) {
            string line;
            while (getline(myfile, line)) {
                Node *newer = new Node;
                newer->name = line;
                getline(myfile, line); // Read the phone number
                stringstream convert(line);
                convert >> newer->phone_number;
                newer->next = NULL;

                if (head == NULL) {
                    newer->prev = NULL;
                    head = newer;
                } else {
                    Node *temp = head;
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newer;
                    newer->prev = temp;
                }
            }
            myfile.close();
        } else {
            cout << "  File is Empty or Cannot open... Sorry" << endl;
        }
    }

    // Display the main menu structure
    void Structure() {
        cout << "\n\n\t   |***********************************|" << endl;
        cout << "\t   |                                   |" << endl;
        cout << "\t   |      1.  Add Contact              |" << endl;
        cout << "\t   |      2.  Edit the Contact         |" << endl;
        cout << "\t   |      3.  Delete the Contact       |" << endl;
        cout << "\t   |      4.  Search the Contact       |" << endl;
        cout << "\t   |      5.  Display Contacts         |" << endl;
        cout << "\t   |      6.  Delete All Contacts      |" << endl;
        cout << "\t   |      7.  Save Contacts            |" << endl;
        cout << "\t   |      8.  Reopen Contacts          |" << endl;
        cout << "\t   |      9.  Exit                     |" << endl;
        cout << "\t   |                                   |" << endl;
        cout << "\t   |***********************************|" << endl;
    }
};

// Main function
int main() {
    ContactBook cb;
    cb.reopenCB(); // Load contacts from file at start
    int choice;

    while (true) {
        cb.Structure();
        cout << "\t   Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cb.CreateNode();
                break;
            case 2:
                cb.EditContacts();
                break;
            case 3:
                cb.DeleteContactBySearch();
                break;
            case 4:
                cb.Search();
                break;
            case 5:
                cb.Display();
                break;
            case 6:
                cb.DeleteAllContacts();
                break;
            case 7:
                cb.OflineSave();
                break;
            case 8:
                cb.reopenCB();
                break;
            case 9:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "  Invalid Choice! Please Try Again." << endl;
        }
    }

    return 0;
}
