#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));          

    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "==============================" << endl;
    cout << "     GUESS THE NUMBER GAME" << endl;
    cout << "==============================" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;

    while (true)
    {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secret)
        {
            cout << "Too low! Try a bigger number." << endl;
        }
        else if (guess > secret)
        {
            cout << "Too high! Try a smaller number." << endl;
        }
        else
        {
            cout << "\nCongratulations!" << endl;
            cout << "You guessed the correct number: " << secret << endl;
            cout << "Number of attempts: " << attempts << endl;
            break;
        }
    }

    return 0;
}