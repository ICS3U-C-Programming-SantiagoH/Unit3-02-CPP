// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Oct, 16, 2023
// This program will ask the user for a number between
// 1 and 10 then check if they guessed my number

#include <iostream>

// Include this for std::setprecision

#include <cmath>
#include <iomanip>

int main() {
    // declare CORRECT_GUESS constant

    const int CORRECT_GUESS = 4;

    // declare userGuess variable

    int userGuess;

    // get the userGuess and display message

    std::cout << "This program asks the user for the a number from ";

    std::cout << "\n1 to 10  and then displays if you guess correctly or not.";

    std::cout << "\nEnter your guess between 1 and 10: ";

    std::cin >>
        userGuess;

    if (userGuess == CORRECT_GUESS) {
        // display that the user answer is correct

        std::cout << "\n";

        std::cout << "Congratulations you guessed correctly";
        }

    if (userGuess != CORRECT_GUESS) {
        // display that the user answer is correct

        std::cout << "\n";

        std::cout << "Please guess again";
        }
}
