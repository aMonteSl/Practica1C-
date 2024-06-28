/* ---------------------------
File: ejercicio8b.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 8b instructs writing a program to estimate the value of the mathematical constant 'e' using the formula:
e = 1 + 1/1! + 1/2! + 1/3! + ... The program should prompt the user for the desired precision of 'e,' which is the number of terms in the sum.
---------------------------- */

#include <iostream>

// Function to calculate the factorial of a number 'n' using a while loop
double calculateFactorial(int n) {
    double factorial = 1.0;
    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    return factorial;
}

// Function to estimate the mathematical constant 'e' with a given precision using while loop
double estimateE(int precision) {
    double e = 1.0;
    int i = 1;
    while (i <= precision) {
        // Add the reciprocal of the factorial to the estimate of 'e'
        e += 1.0 / calculateFactorial(i);
        i++;
    }
    return e;
}

// Function to prompt the user for the desired precision using while loop
int promptPrecision() {
    int precision;
    std::cout << "Enter the desired precision for 'e': ";
    std::cin >> precision;
    return precision;
}

// Function to print the estimated result of 'e' with the given precision
void printResult(double resultE, int precision) {
    std::cout << "The estimated value of 'e' with a precision of " << precision << " terms is: " << resultE << std::endl;
}

int main() {
    // Prompt user for precision
    int precision = promptPrecision();

    // Estimate 'e' with the specified precision
    double resultE = estimateE(precision);

    // Print the result
    printResult(resultE, precision);

    return 0;
}
