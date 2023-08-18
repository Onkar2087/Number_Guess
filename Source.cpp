#include <iostream>  //provides input - cin, output - cout 
#include <cstdlib>  //rand() function - provides a random number, srand() - make sure the random number is 
//different everytime
#include <ctime> // time() function, so that it ensures the next value to be different from the seed value reference to time
using namespace std; // so that throughout the code you no need to write std::cout ot std::cin

int main() {

    srand(static_cast<unsigned int>(time(nullptr))); //srand ensures ranom number displayed, should be different everytime

    int gameNumber = rand() % 100 + 1; // % 100 means 0-99, +1 creates it 1-100

    int guessNumber, count = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Hint is that, the number between 1 and 100" << endl;

    do {
        cout << "Enter your guess = ";
        cin >> guessNumber;
        count++;

        if (guessNumber < gameNumber) {
            cout << "Try a larger number" << endl;
        }
        else if (guessNumber > gameNumber) {
            cout << "Try a smaller number" << endl;
        }
        else {
            cout << "Congratulations! You guessed the Game Number " << gameNumber << " in " << count << " guesses" << endl;
        }
    } while (guessNumber != gameNumber);

    return 0;
}
