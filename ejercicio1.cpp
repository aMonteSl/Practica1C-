/* ---------------------------
File: ejercicio1.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 1 requires writing a program that prompts the user to input two numbers,
then calculates and prints the sum, product, difference, and quotient of those numbers.
---------------------------- */

#include <iostream>

// Function to prompt the user to enter a number
int askNumber() {
    int num;

    std::cout << "Write a number: ";
    std::cin >> num;

    return num;
}

// Function to calculate the sum of two numbers
int getSum(int num1, int num2) {
    return num1 + num2;
}

// Function to calculate the difference of two numbers
int getSubs(int num1, int num2) {
    return num1 - num2;
}

// Function to calculate the product of two numbers
int getProduct(int num1, int num2) {
    return num1 * num2;
}

// Function to calculate the division of two numbers, handling division by zero
int getSplit(int num1, int num2) {
    int result = 0;
    if (num2 != 0) {
        result = num1 / num2;
        return result;
    } else {
        return result;
    }
}

// Main function
int main() {
    int num1;
    int num2;
    int sum;
    int subs;
    int mult;
    int split;

    // Prompt user for two numbers
    num1 = askNumber();
    num2 = askNumber();

    // Calculate sum, difference, product, and division
    sum = getSum(num1, num2);
    subs = getSubs(num1, num2);
    mult = getProduct(num1, num2);
    split = getSplit(num1, num2);

    // Display results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << subs << std::endl;
    std::cout << "Multiplication: " << mult << std::endl;

    // Display division result or an error message if division by zero is attempted
    if (split != 0 || num2 != 0) {
        std::cout << "Division: " << split << std::endl;
    } else {
        std::cout << "Division was not possible because you entered num2 = 0" << std::endl;
    }

    return 0;
}
