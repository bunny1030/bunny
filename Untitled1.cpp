#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));

    
    int randomNumber = std::rand() % 100 + 1;

    int userGuess;
    bool correct = false;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I have generated a random number between 1 and 100. Try to guess it!" << std::endl;

    
    while (!correct) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
            correct = true;
        }
    }

    return 0;
}

