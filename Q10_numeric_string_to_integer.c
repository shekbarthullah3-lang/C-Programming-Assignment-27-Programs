/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 10: Numeric String to Integer.
 // Explanation: This program converts a string containing digits into an integer value.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#include <ctype.h>                                 // This header is required for character functions such as isdigit and tolower.
#include <limits.h>                                // This header provides integer range information such as CHAR_BIT and LLONG_MAX.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    char text[100];                                // Creates a character array large enough to store the string entered by the user.
    long long value = 0;                           // A variable representing the first value or an array.
    printf("Enter a positive whole number as digits: "); // Displays a prompt asking the user to enter a positive whole number using digits.
    if (scanf("%99s", text) != 1) {                // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Input error.\n");                  // Displays an input error message.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    for (int i = 0; text[i] != '\0'; i++) {        // Runs the loop according to its initial value, condition, and increment expression.
        if (!isdigit((unsigned char)text[i])) {    // Checks this condition to decide which branch of the program should run.
            printf("Invalid input: use digits 0 to 9 only.\n"); // Displays an error message if the input contains characters other than digits 0 to 9.
            return 1;                              // Stops the program with an error status because the input was invalid or an error occurred.
        }                                          // Ends the current function, loop, or conditional block.
        int digit = text[i] - '0';                 // A counter representing the current loop index or position.
        if (value > (LLONG_MAX - digit) / 10) {    // Checks this condition to decide which branch of the program should run.
            printf("Number is too large for long long.\n"); // Displays an error message if the number is too large to fit in a long long.
            return 1;                              // Stops the program with an error status because the input was invalid or an error occurred.
        }                                          // Ends the current function, loop, or conditional block.
        value = value * 10 + digit;                // Builds the number by multiplying the previous value by 10 and adding the new digit.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Integer value = %lld\n", value);       // Displays the calculated result on the screen: Integer value = %lld\n
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
