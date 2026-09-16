### Describing how I have implemented the credit card 
## Credit Card 
## Assignment Objectives
- The program should be able to classify whether the credit card entered is valid or not. 
- The program should be able to display the type of the credit card (Visa, MasterCard, etc.).
## Approach
I broke the credit-card validation problem into the seven required helper functions. getSize() determines the number of digits, while getPrefix() extracts the first k digits. I use these functions in prefixMatched() to verify that the card starts with one of the accepted prefixes. For the Luhn check, sumOfDoubleEvenPlace() traverses the number from right to left using % 10 to extract digits and / 10 to remove them. I use a position counter to identify every second digit and double it. If doubling produces a two-digit number, getDigit() adds its digits together. sumOfOddPlace() calculates the sum of the remaining digits. Finally, isValid() checks the number's sign, length, prefix, and Luhn total, returning true only when all conditions are satisfied.

## Prerequisites
- We collect the credit card number from the user. 

## Implementation
The program accepts a credit card number as an integer and determines whether it is valid based on:

The number of digits.
The card's starting prefix.
The Luhn checksum algorithm.

The implementation is divided into seven functions, as required by the assignment:

bool isValid(long long number);
int sumOfDoubleEvenPlace(long long number);
int getDigit(int number);
int sumOfOddPlace(long long number);
bool prefixMatched(long long number, int d);
int getSize(long long d);
long long getPrefix(long long number, int k);

*isValid()* -> This is the main validation function. It coordinates all the other functions.
*getSize()* -> determines the number of digits in a number.
*getPrefix()* -> returns the first k digits of a number.
*prefixMatched()* -> checks if the prefix of the number matches a given digit.



The Digit Traversal Technique

A major technique used throughout this implementation is integer digit traversal.

Two operators are particularly important:

% 10
number % 10

extracts the rightmost digit.

Example:

4385 % 10 = 5
/ 10
number /= 10;

removes the rightmost digit.

Example:

4385 / 10 = 438

Together, they allow us to process every digit:

4385

Extract 5
Remove 5

Extract 8
Remove 8

Extract 3
Remove 3

Extract 4
Remove 4

This is the main technique used to implement the Luhn algorithm without converting the number into a string.