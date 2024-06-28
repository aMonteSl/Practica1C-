/* ---------------------------
File: ejercicio8a.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 8a instructs writing an application that reads a non-negative integer, calculates its factorial, and prints the result using while loops.
---------------------------- */


#include <iostream>

// Function to prompt the user to enter a number
int askNumber() {
    int num;

    // Prompt the user to enter a number
    std::cout << "Write a number: ";
    std::cin >> num;

    return num;
}

// Function to calculate the factorial of a number using a while loop
int calculateFactorial(int num) {
    // Initialize the result to 1
    int result = 1;
    // Initialize a variable i for the loop
    int i = 1;

    // Use a while loop with variable i to multiply the result by numbers from 1 to the given number
    while (i <= num) {
        result *= i;
        i++;
    }

    return result;
}

int main() {
    // Get a number from the user
    int number = askNumber();

    // Calculate the factorial of the entered number
    int result = calculateFactorial(number);

    // Display the result
    std::cout << "The factorial of " << number << " is: " << result << std::endl;

    return 0;
}
