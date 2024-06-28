/* ---------------------------
File: ejercicio7.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 7 requires writing a program that takes a five-digit integer as input, separates the digits,
and prints each digit with three spaces in between. For example, if the user inputs the number 31250, the program should print: 3 1 2 5 0
---------------------------- */

#include <iostream>

// Function to get a five-digit number from the user
int getFiveDigitNumber() {
    int number;
    std::cout << "Enter a five-digit number: ";
    std::cin >> number;
    return number;
}

// Function to separate the digits of a number and print them
void separateAndPrintDigits(int number) {
    int digit;

    // Iterate through each place value from ten thousandths to units
    for (int divisor = 10000; divisor >= 1; divisor /= 10) {
        // Extract the digit at the current place value
        digit = (number / divisor) % 10;
        std::cout << digit << "   ";
    }
    // Print the extracted digit on a new line
    std::cout << std::endl;
}

int main() {
    // Get a five-digit number from the user
    int userNumber = getFiveDigitNumber();

    // Separate and print the digits of the entered number
    separateAndPrintDigits(userNumber);

    return 0;
}
