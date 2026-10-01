#include <iostream>
#include <string>
using namespace std;

const int MAX_QUEUE = 10;

int main() {
    int choice;
    bool running = true;

    string queueList[MAX_QUEUE];
    int queueSize = 0;

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
        case 1: {
            int mood;
            int pick;

            string playlist;
            string song1, song2, song3;
            string chosen;

            cout << endl;
            cout << "How are you feeling today?" << endl;
            cout << "1. Happy" << endl;
            cout << "2. Chill" << endl;
            cout << "3. Workout" << endl;
            cout << "4. Sad" << endl;
            cout << "5. Study" << endl;
            cout << "Choose (1-5): ";
            cin >> mood;

            switch (mood) {

            case 1:
                playlist = "Happy Mix";
                song1 = "Madu Tiga - Tan Sri P.Ramlee";
                song2 = "Can't Stop the Feeling - Justin Timberlake";
                song3 = "Uptown Funk - Mark Ronson ft. Bruno Mars";
                break;

            case 2:
                playlist = "Chill Mix";
                song1 = "Angin Kencang - Noh Salleh";
                song2 = "Ocean Eyes - Billie Eilish";
                song3 = "Sweater Weather - The Neighbourhood";
                break;

            case 3:
                playlist = "Workout Mix";
                song1 = "Believer - Imagine Dragons";
                song2 = "Stronger - Kanye West";
                song3 = "Eye of the Tiger - Survivor";
                break;

            case 4:
                playlist = "Sad Songs Mix";
                song1 = "Jiwa Yang Bersedih - Ghea Indrawari";
                song2 = "Fix You - Coldplay";
                song3 = "Someone You Loved - Lewis Capaldi";
                break;

            default:
                playlist = "Study Mix";
                song1 = "Weightless - Marconi Union";
                song2 = "Clair de Lune - Claude Debussy";
                song3 = "River Flows in You - Yiruma";
                break;
            }

            cout << endl;
            cout << "===== " << playlist << " =====" << endl;
            cout << "1. " << song1 << endl;
            cout << "2. " << song2 << endl;
            cout << "3. " << song3 << endl;

            cout << "Pick a song to add to your queue (1-3): ";
            cin >> pick;

            if (pick == 1) {
                chosen = song1;
            }
            else if (pick == 2) {
                chosen = song2;
            }
            else {
                chosen = song3;
            }

            if (queueSize < MAX_QUEUE) {
                queueList[queueSize] = chosen;
                queueSize++;

                cout << endl;
                cout << "\"" << chosen
                     << "\" was added to the queue." << endl;
            }

            break;
        }

        case 2:

            cout << endl;
            cout << "===== YOUR QUEUE =====" << endl;

            if (queueSize == 0) {
                cout << "The queue is empty." << endl;
            }
            else {
                for (int i = 0; i < queueSize; i++) {
                    cout << i + 1 << ". "
                         << queueList[i] << endl;
                }
            }

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