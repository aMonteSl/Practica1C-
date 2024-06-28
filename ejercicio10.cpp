/* ---------------------------
File: ejercicio10.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 10 asks for a program that prints the following diamond pattern using output statements with a single asterisk (*) or a single space.
The goal is to maximize the use of repetition (with nested for loops) and minimize the number of output statements.
---------------------------- */

#include <iostream>

const int ROWS = 9;  // Number of rows in the diamond

// Function to print a specified number of spaces
void printSpaces(int numSpaces) {
    for (int i = 0; i < numSpaces; ++i) {
        std::cout << " ";
    }
}

// Function to print a specified number of asterisks
void printAsterisks(int numAsterisks) {
    for (int i = 0; i < numAsterisks; ++i) {
        std::cout << "*";
    }
}

// Function to print spaces and asterisks for the current row
void printSpacesAndAsterisks(int n, int i) {
    // Print spaces to center the asterisks
    printSpaces((n - i) / 2);
    // Print asterisks for the current row
    printAsterisks(i);
    // Move to the next line after each row
    std::cout << std::endl;
}

// Function to print the upper half of the diamond
void printUpperHalf(int n) {
    for (int i = 1; i <= n; i += 2) {
        // Use the common printing function
        printSpacesAndAsterisks(n, i);
    }
}

// Function to print the lower half of the diamond
void printLowerHalf(int n) {
    for (int i = n - 2; i >= 1; i -= 2) {
        // Use the common printing function
        printSpacesAndAsterisks(n, i);
    }
}

// Function to print a title indicating that a diamond will be printed
void printDiamondTitle() {
    std::cout << "Printing a diamond of " << ROWS << " rows:" << std::endl;
}

// Function to print the entire diamond
void printDiamond(int n) {
    // Print the upper half of the diamond
    printUpperHalf(n);

    // Print the lower half of the diamond
    printLowerHalf(n);
}

int main() {
    // Print the title
    printDiamondTitle();

    // Print the diamond with the specified number of rows
    printDiamond(ROWS);

    return 0;
}
