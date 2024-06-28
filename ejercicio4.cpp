/* ---------------------------
File: ejercicio4.cpp
Author: Adrián Montes Linares
Date: 04/02/24
Goal: Exercise 4 requires creating a program that takes three integers from the keyboard and prints the sum,
average, product, smallest, and largest of those numbers. The output should be formatted as follows:
Enter three distinct integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27
---------------------------- */

#include <iostream>

// Const num_numbers
const int NUM_NUMBERS = 3;

// Function to prompt the user to enter a number
void messsageAskNumber() {
    std::cout << "Write three different integers: ";
}

// Function to calculate the sum of three numbers
int getSum(int num1, int num2, int num3) {
    return num1 + num2 + num3;

}

// Function to calculate the average of the three numbers
int getAverage(int sum){
    return sum / NUM_NUMBERS;

}

// Function to calculate the product of three numbers
int getProduct(int num1, int num2, int num3) {
    return num1 * num2 * num3;

}

// Funtion to calculate the smaller
int getSmaller(int num1, int num2, int num3) {
    // Initialize minValue with num1
    int minValue = num1;

    if (num2 < minValue) {
        minValue = num2;
    } else if (num3 < minValue){
        minValue = num3;
    }

    return minValue;
}

// Funtion to calculate the largest
int getLargest(int num1, int num2, int num3) {
    // Initialize maxValue with num1
    int maxValue = num1;

    if (num2 > maxValue) {
        maxValue = num2;
    } else if (num3 > maxValue){
        maxValue = num3;
    }

    return maxValue;
}


void allOperations(int num1, int num2, int num3){
    int total;
    // ---ALL THE OPERATION---

    // Sum
    total = getSum(num1, num2, num3);
    std::cout << "The sum is: " << total << std::endl;
    // Average
    total = getAverage(total);
    std::cout << "The average is: " << total << std::endl;
    // Product
    total = getProduct(num1, num2, num3);
    std::cout << "The product is: " << total << std::endl;
    // Smaller
    total = getSmaller(num1, num2, num3);
    std::cout << "The smaller is: " << total << std::endl;
    // Largest
    total = getLargest(num1, num2, num3);
    std::cout << "The largest is: " << total << std::endl;
    
}


int main(){
    int num1, num2, num3;
    
    // Ask user for three numbers and get the numbers
    messsageAskNumber();
    // We dont create a function for this becouse at the moment we dont know how to manage multiple returns
    std::cin >> num1 >> num2 >> num3;

    //Do all the operation
    allOperations(num1, num2, num3);
    
    return 0;
}