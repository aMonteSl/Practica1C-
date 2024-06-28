/* ---------------------------
File: ejercicio3.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 3 involves creating a program that prompts the user to input two integers,
then it should obtain the numbers and print the larger number followed by the expression "is greater."
If the numbers are equal, the program should print the message "These numbers are equal."
---------------------------- */

#include <iostream>

// Ask for a number to the user
int askNumber(){
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    return number;
}

// Print the biger number
void wichOneIsBiger(int num1, int num2){
    // Number 1 is the bigger
    if (num1 > num2){
        std::cout << "The number " << num1 << " is the bigger" << std::endl;
    // Number 2 is the bigger
    } else if (num2 > num1){
        std::cout << "The number " << num2 << " is the bigger" << std::endl;
    // Equal
    } else{
        std::cout << "Both numbers are equal" << std::endl;
    }

    
}


// Main function
int main() {
    int num1;
    int num2;
    
    // Prompt user for two numbers
    num1 = askNumber();
    num2 = askNumber();

    // Compare both numbers and print the biger one
    wichOneIsBiger(num1, num2);

    return 0;

}