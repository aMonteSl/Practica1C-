/* ---------------------------
File: ejercicio8c.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 8c asks for an application that calculates the value of e^x using the formula.
The program should prompt the user for the desired precision of e (the number of terms in the sum) and use while loops.
---------------------------- */

#include <iostream>

// Function to calculate the factorial of a number
double calculateFactorial(int n) {
    double factorial = 1;
    int i = 1;

    // Calculate factorial using a while loop
    while (i <= n) {
        factorial *= i;
        i++;
    }

    return factorial;
}

// Function to calculate the power of a number
double calculatePower(double base, int exponent) {
    double result = 1;
    int i = 1;

    // Calculate power using a while loop
    while (i <= exponent) {
        result *= base;
        i++;
    }

    return result;
}

// Function to calculate the exponential value
double calculateExponential(int terms) {
    double e = 1;
    int i = 1;

    // Calculate the exponential value using a while loop
    while (i <= terms) {
        e += calculatePower(terms, i) / calculateFactorial(i);
        i++;
    }

    return e;
}

// Function to prompt the user for precision input
int askForPrecision() {
    int terms;
    std::cout << "Enter the number of terms for the desired precision: ";
    std::cin >> terms;
    return terms;
}

// Function to print the result
void printResult(double result, int terms) {
    std::cout << "The value of e^" << terms << " with " << terms << " terms is: " << result << std::endl;
}

int main() {
    // Get precision from the user
    int terms = askForPrecision();

    // Calculate the exponential value
    double e = calculateExponential(terms);

    // Print the result
    printResult(e, terms);

    return 0;
}
