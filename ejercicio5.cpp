/* ---------------------------
File: ejercicio5.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 5 asks for a program that reads the radius of a circle as an integer, then prints its diameter, circumference, and area.
The program should use the constant value 3.14159 for À and perform all calculations in output statements.
---------------------------- */

#include <iostream>

// Define PI like a float
const float PI = 3.14159;

// Funtion that ask for the radius
int askRadius(){
    int radius;
    std::cout << "Enter the radius: ";
    std::cin >> radius;
    return radius;
}


int main(){
    // Prompt the user to enter the integer value for the radius
    int radius;
    radius = askRadius();

    // Calculate the diameter and print at the same line
    std::cout << "Diameter: " << 2 * radius << std::endl;
    // Calculate the circumference and print at the same line
    std::cout << "Circumference: " << 2 * PI * radius << std::endl;
    // Calculate the area and print at the same line
    std::cout << "Area: " << PI * radius * radius << std::endl;

    return 0;

}