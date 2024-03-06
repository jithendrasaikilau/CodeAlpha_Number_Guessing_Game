#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(0));
    char playAgain;

    do {
        int secretenumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        cout << "Welcome to the Number Guessing Game!\n";
        cout << "Can you guess the number between 1 and 100?\n";

        clock_t startTime = clock();  // Record the starting time

        do {
            cout << "Enter your guess:";
            cin >> guess;
            attempts++;

            if (guess > secretenumber) 
            {
                cout << "It's too high, please try again!\n";
            } 
            else if (guess < secretenumber) 
            {
                cout << "It's too low, please try again!\n";
            } 
            else 
            {
                clock_t endTime = clock();
                double elapsedSeconds = double(endTime - startTime) / CLOCKS_PER_SEC;
                cout << "Congratulations! You have found the number in " << attempts << " attempts.\n";
                cout << "Time taken: " << elapsedSeconds << " seconds.\n";
            }
        } 
        while (guess != secretenumber);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } 
    while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye.\n";
    return 0;
}
