// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This program identifies if an integer is positive, negative or zero

#include <iostream>

int main() {
    // This function tells you if a number is positive, negative, or equal to 0

    // variables
    int integer;

    // Input
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> integer;
    std::cout << "" << std::endl;

    // Process
    if (integer > 0) {
        std::cout << "This is a positive integer. " << std::endl;
    } else if (integer < 0) {
          std::cout << "This is a negative integer. " << std::endl;
    } else if (integer == 0) {
          std::cout << "This integer is zero. " << std::endl;
    } else {
          std::cout << "Error, unable to identify integer" << std::endl;
    }
}
