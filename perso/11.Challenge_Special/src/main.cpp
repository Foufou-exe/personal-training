/*
    Challenge: Special
    Description: Write a program that takes a string as input and prints a pyramid of the string.

    Example:
        Input: "Hello"
        Output:
            H
           HHe
          HHello
         HHelloHHe
        HHelloHHeH
*/

#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    int n = input.length();

    for (int row = 0; row < n; row++) {
        // Print leading spaces
        for (int space = 0; space < n - row - 1; space++) {
            std::cout << " ";
        }

        // Print the first half of the pyramid
        for (int i = 0; i <= row; i++) {
            std::cout << input[i];
        }

        // Print the second half of the pyramid
        for (int i = row - 1; i >= 0; i--) {
            std::cout << input[i];
        }

        std::cout << std::endl;
    }

    return 0;
}
