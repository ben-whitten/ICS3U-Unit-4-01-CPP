// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which add numbers together up to another number.

#include <iostream>
#include <cstdlib>

int main() {
    // This is what runs the program.
    std::string numberAsString;
    int chosenNumber;
    int numberTotal = 0;
    int nextFullNumber = 0;

    // Process
    while (true) {
        std::cout << "Input a positive number: ";
        std::cin >> numberAsString;
        std::cout << "" << std::endl;

        try {
            chosenNumber = std::stoi(numberAsString);

            if (chosenNumber > 0) {
            // Output
                while (nextFullNumber < chosenNumber) {
                    std::cout << "+ " << nextFullNumber << std::endl;
                    nextFullNumber = nextFullNumber + 1;
                    numberTotal = numberTotal + nextFullNumber;
                }
                std::cout << "+ " << nextFullNumber << std::endl;
                std::cout << "= " << numberTotal << std::endl;
                break;
            } else {
                std::cout << "That was not a positive number." << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "That was not a positive number." << std::endl;
        }
    }
}
