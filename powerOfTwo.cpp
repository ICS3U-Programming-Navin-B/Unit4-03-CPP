// Copyright (c) 2022 Navin Balekomebole All rights reserved.
//
// Created by: Navin Baleko
// Created on: Jan 11 2022
// This program will get the user to enetr a number.
//  and will square .
#include <iostream>
#include <cmath>

int main() {
    // declare the variables
    int square;
    std::string numberString;
    int userNumber;

    // get the user number asd a strint
    std::cout << "Enter the number of your choice: ";
    std::getline(std::cin, numberString);
    std::cout << std::endl;

    // error checking
    try {
        userNumber = std::stoi(numberString);
        // check if the number is negative
        if (userNumber < 0) {
            std::cout << "Number can't be negatine\n";
        } else {
            // Calculate the squares
            for (int loop = 0; loop < (userNumber + 1); loop++) {
                square = pow(loop, 2);
                std::cout << loop << " ^ 2 =" << square << "\n";
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input, must be an integer\n";
    }
    std::cout << "Thanks for playing";
}
