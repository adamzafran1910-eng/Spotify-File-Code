#include <iostream>
using namespace std;

int main() {
    int choice;
    bool running = true;

    cout << "=== Welcome to the Spotify Assistant ===" << endl;

    while (running) {
        cout << endl;
        cout << "1. Get a playlist recommendation" << endl;
        cout << "2. View queue" << endl;
        cout << "3. View Premium plan" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose (1-4): ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << endl;
            cout << "Playlist recommendation feature coming soon." << endl;
            break;

        case 2:
            cout << endl;
            cout << "Queue feature coming soon." << endl;
            break;

        case 3:
            cout << endl;
            cout << "Premium plan feature coming soon." << endl;
            break;

        case 4:
            cout << endl;
            cout << "Goodbye! Enjoy your music." << endl;
            running = false;
            break;

        default:
            cout << endl;
            cout << "Invalid choice. Please choose 1 to 4." << endl;
        }
    }

    return 0;
}