#include <iostream>
#include <iomanip>
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
        cout << "2. View queue / play next song" << endl;
        cout << "3. View Premium plan and subscribe" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose (1-4): ";
        cin >> choice;

        switch (choice) {

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

            cout << "Pick a song (1-3): ";
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

        case 2: {
            int action;
            bool inQueue = true;

            while (inQueue) {

                cout << endl;
                cout << "===== YOUR QUEUE =====" << endl;

                if (queueSize == 0) {

                    cout << "The queue is empty." << endl;
                    inQueue = false;
                }

                else {

                    cout << "Next up: "
                         << queueList[0] << endl;

                    for (int i = 1; i < queueSize; i++) {
                        cout << i + 1 << ". "
                             << queueList[i] << endl;
                    }

                    cout << endl;
                    cout << "1. Play next song" << endl;
                    cout << "2. Clear queue" << endl;
                    cout << "3. Back to main menu" << endl;
                    cout << "Choose (1-3): ";
                    cin >> action;

                    if (action == 1) {

                        cout << endl;
                        cout << "Now playing: "
                             << queueList[0] << endl;

                        // FIFO
                        for (int i = 0;
                             i < queueSize - 1;
                             i++) {

                            queueList[i] =
                                queueList[i + 1];
                        }

                        queueSize--;
                    }

                    else if (action == 2) {

                        queueSize = 0;

                        cout << endl;
                        cout << "Queue cleared." << endl;
                    }

                    else {

                        inQueue = false;
                    }
                }
            }

            break;
        }

        case 3: {
            int student;
            int subscribe;

            double premiumPrice = 14.90;
            double monthly;

            string planName;

            cout << endl;
            cout << "Are you a student? 1 = Yes, 2 = No: ";
            cin >> student;

            if (student == 1) {

                monthly = premiumPrice * 0.5;
                planName = "Premium Student";
            }

            else {

                monthly = premiumPrice;
                planName = "Premium Individual";
            }

            cout << fixed << setprecision(2);

            cout << endl;
            cout << "===== FREE PLAN =====" << endl;
            cout << "Price : RM 0.00" << endl;
            cout << "- Contains ads between songs" << endl;
            cout << "- No offline listening" << endl;
            cout << "- Limited skips" << endl;

            cout << endl;
            cout << "===== " << planName
                 << " =====" << endl;

            if (student == 1) {

                cout << "Student price : RM "
                     << monthly
                     << " per month" << endl;

                cout << "(50% off the normal price of RM "
                     << premiumPrice << ")" << endl;
            }

            else {

                cout << "Price : RM "
                     << monthly
                     << " per month" << endl;
            }

            cout << "Benefits:" << endl;
            cout << "- No ads" << endl;
            cout << "- Download songs and listen offline" << endl;
            cout << "- Unlimited skips" << endl;
            cout << "- Higher audio quality" << endl;

            cout << endl;
            cout << "Do you want to subscribe? "
                 << "1 = Yes, 2 = No: ";
            cin >> subscribe;

            if (subscribe == 1) {

                cout << endl;
                cout << "Subscription successful!" << endl;
                cout << "Plan: " << planName << endl;
                cout << "Payment: RM "
                     << monthly
                     << " per month." << endl;
            }

            else {

                cout << endl;
                cout << "You will stay on the Free plan."
                     << endl;
            }

            break;
        }

        case 4:

            cout << "Goodbye! Enjoy your music." << endl;
            running = false;

            break;

        default:

            cout << "Invalid choice. Please choose 1 to 4."
                 << endl;
        }
    }

    return 0;
}