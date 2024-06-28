/* ---------------------------
File: ejercicio9.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 9 instructs calculating the value of À using the infinite series.
The task is to print a table showing the approximate value of À after each of the first 1000 terms of this series.
---------------------------- */

#include <iostream>

const int MAX_TERMS = 1000;

// Function to calculate the Leibniz series term for a given index
double calculateTerm(int index) {
    // Formula for the Leibniz series term: 1 / (2 * index + 1)
    return 1.0 / (2 * index + 1);
}

// Function to compute the value of pi using the Leibniz series with a specified number of terms
double calculatePi() {
    double pi = 0.0;

    // Loop through the specified number of terms (MAX_TERMS)
    for (int i = 0; i < MAX_TERMS; ++i) {
        double currentTerm = calculateTerm(i);

        // If the index 'i' is even, add the currentTerm; if odd, subtract it
        if (i % 2 == 0) {
            pi += currentTerm;
        } else {
            pi -= currentTerm;
        }
    }

    // Multiply the result by 4 to get an approximation of pi
    pi *= 4;

    return pi;
}

// Function to print the value of pi
void printPi(double piValue) {
    // Display the calculated value of pi
    std::cout << "The approximate value of pi using the Leibniz series with "
              << MAX_TERMS << " terms is: " << piValue << std::endl;
}

int main() {
    // Calculate the approximate value of pi
    double approxPi = calculatePi();

    // Call the printPi function to display the value of pi
    printPi(approxPi);

    return 0;
}
