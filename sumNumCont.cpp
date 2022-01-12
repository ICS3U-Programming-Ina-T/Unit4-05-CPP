// Copyright (c) Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Date: Jan. 12, 2022
// This program asks the user how many numbers they would like
// to add. It then uses a while loop to calculate and display
// the sum of x numbers. A continue statement is also used.
#include <iostream>

int main() {
  // initialize the loop counter and sum
  int counter = 0;
  int sum = 0;
  // declare number and string variables
  int userNumAInt;
  int userNumBInt;
  std::string userNumAString;
  std::string userNumBString;

  // get user number as a string
  std::cout << "How many numbers would you like to add?: ";
  std::cin >> userNumAString;
  std::cout << std::endl;

  try {
      // converts the first user input to integer
      userNumAInt = std::stoi(userNumAString);

      if (userNumAInt >= 0) {
          // calculate the sum of the entered numbers
          while (counter < userNumAInt) {
              std::cout << "Enter a whole number: ";
              std::cin >> userNumBString;

              try {
                // converts entered number from string to integer
                userNumBInt = std::stoi(userNumBString);
                if (userNumBInt >= 0) {
                  std::cout << userNumBInt << " added to the sum.\n";
                  std::cout << userNumBInt << " + " << sum << ".\n";
                  std::cout << std::endl;
                  sum = sum + userNumBInt;
                  counter = counter + 1;

                  if (counter == userNumAInt) {
                    continue;
                  }
                } else {
                    std::cout << "Please enter a whole number!\n";
                    std::cout << std::endl;
                }
              } catch (std::invalid_argument) {
                // The user did not enter a number.
                std::cout << userNumBString << " is not a number.\n";
                std::cout << std::endl;
                }
            }
            // display the sum to the user
            std::cout << "The total sum is " << sum << ".";
        } else {
            std::cout << "Please enter a whole number!";
        }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << userNumAString << " is not a number.\n";
    }
}

