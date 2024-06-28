/* ---------------------------
File: ejercicio10pro.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 10 pro its like ejercicio10.cpp but now the user input a number between 1-19 that will be the rows of the diamond
---------------------------- */

#include <iostream>

const int MIN_VALUE = 1;
const int MAX_VALUE = 19;

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

// Function to print the entire diamond with the specified number of rows
void printDiamond(int userRows) {
    // Ensure userRows is within the allowed range
    int rows = (userRows < 1) ? 1 : (userRows > 19) ? 19 : userRows;

    // Print the title
    std::cout << "Printing a diamond of " << rows << " rows:" << std::endl;

    // Print the upper half of the diamond
    printUpperHalf(rows);

    // Print the lower half of the diamond
    printLowerHalf(rows);
}

// Funtion to ask the user the numbers of rows
void askNumberOfRows(){
    std::cout << "Enter the number of rows for the diamond (odd number from 1 to 19): ";
}

// Funtion to validate the user input
int validateInputRows(){
    bool exit = false;
    int userRows;
    // Validate user input
    while (not exit) {
        std::cin >> userRows;

        if ((MIN_VALUE < userRows && userRows < MAX_VALUE) && (userRows % 2 == 1)){
            exit = true;
        } else {
            std::cout << "Invalid input. Please enter an odd number from 1 to 19: ";
        }
    }

    return userRows;

}

// Function to prompt the user for the number of rows
int getNumberOfRows() {
    askNumberOfRows();
    int userRows = validateInputRows();
    
    return userRows;
}

int main() {
    // Get the number of rows from the user
    int userRows = getNumberOfRows();

    // Print the diamond with the user-specified number of rows
    printDiamond(userRows);

    return 0;
}
