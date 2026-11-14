/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 19: Replace n Bits Using a Second Number.
 // Explanation: This program replaces a selected bit range in the first number with bits from a second number.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#include <limits.h>                                // This header provides integer range information such as CHAR_BIT and LLONG_MAX.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    unsigned int first, second, start, count;      // first is the number to modify; replacement bits are taken from second; start and count specify the bit range.
    unsigned int width = (unsigned int)(sizeof(first) * CHAR_BIT); // Calculates the total number of bits in an unsigned int.
    printf("Enter first, second, start position, and bit count: "); // Displays a prompt asking the user for the first number, second number, starting position, and bit count.
    if (scanf("%u %u %u %u", &first, &second, &start, &count) != 4) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid input.\n");                // Displays an error message when the input is invalid.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    if (start >= width || count == 0 || count > width - start) { // Checks whether the bit positions and count are within the valid range for unsigned int.
        printf("Invalid bit range.\n");            // Displays an error message if the bit range is invalid.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    unsigned int fieldMask = (count == width) ? ~0u : ((1u << count) - 1u); // Creates a mask for count bits; if count equals the full width, all bits are set to 1.
    unsigned int shiftedMask = fieldMask << start; // Shifts the bit mask to the left by the starting position.
    unsigned int cleared = first & ~shiftedMask;   // Clears the bit positions to be replaced by setting them to 0 in the first number.
    unsigned int replacement = (second & fieldMask) << start; // Selects the required bits from the second number and shifts them to the starting position.
    unsigned int result = cleared | replacement;   // A variable that stores the number entered by the user or an array size.
    printf("Result after replacement = %u\n", result); // Displays the calculated result on the screen: Result after replacement = %u\n
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
