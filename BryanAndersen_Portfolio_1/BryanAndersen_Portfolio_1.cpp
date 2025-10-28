// BryanAndersen_Portfolio_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

using namespace std;
string input;
int record = 0;

// Function to display the phone book records
void phoneBook_rec(const map<string, string>& phoneBook) {
    cout << "\nPhone Book Records:\n";
    for (const auto& entry : phoneBook) {
        cout << entry.first << ": " << entry.second << endl;
        record++;
    }
    cout << "Total Records: " << record << endl;
}


// Function to save phone book records to a text file
void saveToFile(const map<string, string>& phoneBook, const string& phone_book) {
    ofstream file(phone_book);
    if (!file.is_open()) {
        cout << "Error: Unable to open the file for writing." << endl;
        return;
    }

    for (const auto& entry : phoneBook) {
        file << entry.first << ", " << entry.second << endl;
    }

    file.close();
}


// Function to load phone book records from a text file
void loadFromFile(map<string, string>& phoneBook, const string& phone_book) {
    ifstream file(phone_book);
    if (!file.is_open()) {
        cout << "Warning: File not found. Creating phone book." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string name, number;
        getline(iss, name, ',');
        getline(iss, number);
        phoneBook[name] = number;
    }
    file.close();
}

int main()
{
    map<string, string> phoneBook;
    string phone_book = "phone_book.txt";

    // Load existing phone book records from text file
    loadFromFile(phoneBook, phone_book);

    if (!phoneBook.empty()) {
        phoneBook_rec(phoneBook);
    }

    while (true) {
        cout << "\nA to Add, E to Edit, D to Delete, P to Print, Ex to Exit: ";
        cin >> input;

        if (input == "A" || input == "a") {
            string name, number;
            cout << "Enter name: ";
            cin.ignore(); // Ignore the new line character left in the input buffer
            getline(cin, name);

            // Check for duplicate entry
            if (phoneBook.find(name) != phoneBook.end()) {
                cout << "Error: The name is already exists in the phone book." << endl;
                continue;
            }
            cout << "Enter telephone number: ";
            getline(cin, number);

            phoneBook[name] = number;
            cout << "Record is added successfully!" << endl;
        }
        else if (input == "E" || input == "e") {
            string name, number;
            cout << "Enter name to edit: ";
            cin.ignore();
            getline(cin, name);

            auto it = phoneBook.find(name);
            if (it == phoneBook.end()) {
                cout << "Error: Name is not found in the phone book." << endl;
                continue;
            }

            cout << "Enter new telephone number: ";
            getline(cin, number);

            // Edit the existing record
            it->second = number;
            cout << "Record is successfully edited!" << endl;
        }
        else if (input == "D" || input == "d") {
            string name;
            cout << "Enter name to delete: ";
            cin.ignore();
            getline(cin, name);

            auto it = phoneBook.find(name);
            if (it == phoneBook.end()) {
                cout << "Error: Name is not found in the phone book." << endl;
                continue;
            }

            // Delete record
            phoneBook.erase(it);
            cout << "Record is deleted successfully!" << endl;
        }
        else if (input == "P" || input == "p") {
            phoneBook_rec(phoneBook);
        }
        else if (input == "Ex" || input == "EX" || input == "ex" || input == "eX") {
            // Save the phone book to the text file before closing the program
            saveToFile(phoneBook, phone_book);
            cout << "Phone book data is saved. Exiting program...." << endl;
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}