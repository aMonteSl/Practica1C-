# 1-IntroC-_AST-23-24: Introduction to C++
### Author: Adrián Montes Linares AST

# 1. Objective

The objective of this practice is to familiarize oneself with C++ through provided simple exercises, learning the use of basic tools.

# 2. Exercises
## Exercise 1 

**Goal:** Exercise 1 requires writing a program that prompts the user to input two numbers, then calculates and prints the sum, product, difference, and quotient of those numbers.

## Exercise 2
### Exercise 2a
**Goal:** Exercise 2a requires creating a program that displays numbers from 1 to 4 on the same line. The adjacent numbers should be separated by a space. This is to be done using a stream insertion operator (<<) in the program. The goal is to print the sequence like this: 1 2 3 4.

### Exercise 2b
**Goal:** Exercise 2b instructs writing a program to print numbers from 1 to 4 on the same line, with each pair of adjacent numbers separated by a space. Specifically, for part b, it asks to achieve this using a single statement with four stream insertion operators.

### Exercise 2c
**Goal:** Exercise 2c instructs writing a program to print numbers from 1 to 4 on the same line, with each pair of adjacent numbers separated by a space. The task should be done using four statements.

## Exercise 3
**Goal:** Exercise 3 involves creating a program that prompts the user to input two integers, then it should obtain the numbers and print the larger number followed by the expression "is greater." If the numbers are equal, the program should print the message "These numbers are equal."

## Exercise 4
**Goal:** Exercise 4 requires creating a program that takes three integers from the keyboard and prints the sum, average, product, smallest, and largest of those numbers. The output should be formatted as follows:
Enter three distinct integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27

## Exercise 5
**Goal:** Exercise 5 asks for a program that reads the radius of a circle as an integer, then prints its diameter, circumference, and area. The program should use the constant value 3.14159 for À and perform all calculations in output statements.

## Exercise 6
**Goal:** Exercise 6 asks for an application to display a chessboard pattern, initially using eight output statements (cout) and then attempting to use the minimum number of instructions possible

## Exercise 7
**Goal:** Exercise 7 requires writing a program that takes a five-digit integer as input, separates the digits, and prints each digit with three spaces in between. For example, if the user inputs the number 31250, the program should print: 3 1 2 5 0

## Exercise 8
### Exercise 8a
**Goal:** Exercise 8a instructs writing an application that reads a non-negative integer, calculates its factorial, and prints the result using while loops.

### Exercise 8b
**Goal:** Exercise 8b instructs writing a program to estimate the value of the mathematical constant 'e' using the formula: e = 1 + 1/1! + 1/2! + 1/3! + ... The program should prompt the user for the desired precision of 'e,' which is the number of terms in the sum.

### Exercise 8c
**Goal:** Exercise 8c asks for an application that calculates the value of e^x using the formula. The program should prompt the user for the desired precision of e (the number of terms in the sum) and use while loops.

## Exercise 9
**Goal:** Exercise 9 instructs calculating the value of À using the infinite series. The task is to print a table showing the approximate value of À after each of the first 1000 terms of this series.

## Exercise 10
### Standard Version
**Goal:** Exercise 10 asks for a program that prints the following diamond pattern using output statements with a single asterisk (*) or a single space. The goal is to maximize the use of repetition (with nested for loops) and minimize the number of output statements.

### Pro Version
**Goal:** Exercise 10 pro is like ejercicio10.cpp but now the user input a number between 1-19 that will be the rows of the diamond

# 3. Tools Learned
## Handling Inputs (Exercise 1)

```c++
// Function to prompt the user to enter a number
int askNumber() {
    int num;

    std::cout << "Write a number: ";
    std::cin >> num;

    return num;
}
```

## Handling if Statements (Exercise 3)
```c++
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
```

## Creating Constants (Exercise 4)
```c++
// Const num_numbers
const int NUM_NUMBERS = 3;
```

## For Loops and Nested Loops (Exercise 6)
```c++
// Pattern two. Here we have the main loop to use the fewest instructions possible
void patternTwo() {
    for (int rows = 0; rows < LOOP_NUMBER; ++rows) {
        for (int cols = 0; cols < LOOP_NUMBER * 2; ++cols) {
            printPattern(rows, cols);
        }
        printEndl();
    }
}
```

## While Loops (Exercise 8a)
```c++
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
```

# 4. MakeFile
**make:** Compile all cpp files and generate executables
**make clean:** Remove object files and executables
'*' can be any number 1-10. Special numbers (2a, 2b, 2c, 8a, 8b, 8c, and 10pro)
```bash
make      
make clean
./ejercicio*
