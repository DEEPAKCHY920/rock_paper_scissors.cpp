#include <bits/stdc++.h>
using namespace std;

int main() {
    int computer, user;
    char choice;

    srand(time(0));

    do {
        computer = rand() % 3;

        cout << "\nEnter number (0 to 2)\n";
        cout << "0 = Rock\n1 = Paper\n2 = Scissors\n";
        cout << "Your choice: ";
        cin >> user;

        if (user >= 0 && user <= 2) {

            cout << "Computer chose: ";
            if (computer == 0) cout << "Rock\n";
            else if (computer == 1) cout << "Paper\n";
            else cout << "Scissors\n";

            if (computer == user) {
                cout << "Match is Draw 🤝\n";
            }
            else if (
                (user == 0 && computer == 2) ||
                (user == 1 && computer == 0) ||
                (user == 2 && computer == 1)
            ) {
                cout << "🎉 You Win!\n";
            }
            else {
                cout << "😢 You Lose!\n";
            }
        }
        else {
            cout << "❌ Wrong input! Enter only 0, 1, or 2.\n";
        }

        cout << "\nDo you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThanks for playing! 👋\n";
    return 0;
}
