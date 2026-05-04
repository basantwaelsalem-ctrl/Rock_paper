#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int playerChoice;
    int computerChoice;
    char playAgain;

    do {
        cout << "--- Rock Paper Scissors Game ---" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> playerChoice;

        computerChoice = (rand() % 3) + 1;

        cout << "Computer chose: ";
        if (computerChoice == 1) cout << "Rock" << endl;
        else if (computerChoice == 2) cout << "Paper" << endl;
        else cout << "Scissors" << endl;

        if (playerChoice == computerChoice) {
            cout << "It's a draw!" << endl;
        } 
        else if ((playerChoice == 1 && computerChoice == 3) || 
                 (playerChoice == 2 && computerChoice == 1) || 
                 (playerChoice == 3 && computerChoice == 2)) {
            cout << "You win!" << endl;
        } 
        else {
            cout << "Computer wins!" << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
