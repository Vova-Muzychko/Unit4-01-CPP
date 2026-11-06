// Created by: Vova
// Created on: 6 Nov 2026
// Copyright 2026 Vova
// This program calculates the sum of whole numbers up to a positive integer
// using a while loop.

#include <iostream>
#include <string>

int main() {
    std::string userString;
    int userNumber;
    int counter = 0;
    int totalSum = 0;

    // Input
    std::cout << "Enter a positive integer: ";
    std::cin >> userString;

    // Process and Output
    try {
        userNumber = std::stoi(userString);

        // Check if input is positive
        if (userNumber > 0) {
            while (counter <= userNumber) {
                totalSum += counter;
                counter += 1;
            }
            std::cout << "\nThe sum of whole numbers from 0 to "
                      << userNumber << " is " << totalSum << "." << std::endl;
        } else if (userNumber == 0) {
            std::cout << "\n0 is not a positive integer." << std::endl;
        } else {
            std::cout << "\n" << userNumber
                      << " is a negative integer. Please enter "
                      << "a positive number."
                      << std::endl;
        }
    } catch (std::invalid_argument&) {
        std::cout << "\n" << userString
                      << " is not a valid integer." << std::endl;
    }

    return 0;
}
