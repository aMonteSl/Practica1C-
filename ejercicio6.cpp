/* ---------------------------
File: ejercicio6.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 6 asks for an application to display a chessboard pattern,
initially using eight output statements (cout) and then attempting to use the minimum number of instructions possible
---------------------------- */

#include <iostream>

// Constant for the loop
const int LOOP_NUMBER = 8;

// Print *
void printSymbol() {
    std::cout << "*";
}

// Print space
void printSpace() {
    std::cout << " ";
}

// Print newline
void printEndl() {
    std::cout << std::endl;
}

// Print either space or *
void printPattern(int rows, int cols) {
    if ((rows + cols) % 2 == 0) {
        printSymbol();
    } else {
        printSpace();
    }
}

// Pattern two. Here we have the main loop to use the fewest instructions possible
void patternTwo() {
    for (int rows = 0; rows < LOOP_NUMBER; ++rows) {
        for (int cols = 0; cols < LOOP_NUMBER * 2; ++cols) {
            printPattern(rows, cols);
        }
        printEndl();
    }
}

// Type one instruction
void typeOne() {
    std::cout << "* " << "* " << "* " << "* " << "* " << "* " << "* " << "* " << std::endl;
}

// Type two instruction
void typeTwo() {
    std::cout << " *" << " *" << " *" << " *" << " *" << " *" << " *" << " *" << std::endl;
}

// Pattern one. Here we use a total of eight instructions
void patternOne() {
    typeOne();
    typeTwo();
    typeOne();
    typeTwo();
    typeOne();
    typeTwo();
    typeOne();
    typeTwo();
}

int main() {
    // Pattern with eight instructions in total
    std::cout << "Using 8 instructions in total" << std::endl;
    patternOne();

    // Pattern with the fewest instructions possible
    std::cout << "Using the minimum instructions" << std::endl;
    patternTwo();

    return 0;
}
