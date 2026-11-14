/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 17: Toggle n Bits from a Position.
 // Explanation: This program toggles the requested number of bits starting at a specific position.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#include <limits.h>                                // This header provides integer range information such as CHAR_BIT and LLONG_MAX.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    unsigned int number, start, count;             // number is the integer whose bits are being changed; start is the starting bit position; count is the number of bits to change.
    unsigned int width = (unsigned int)(sizeof(number) * CHAR_BIT); // Calculates the total number of bits in an unsigned int.
    printf("Enter number, starting bit position, and count: "); // Displays a prompt asking the user for the number, starting bit position, and count.
    if (scanf("%u %u %u", &number, &start, &count) != 3) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid input.\n");                // Displays an error message when the input is invalid.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    if (start >= width || count == 0 || count > width - start) { // Checks whether the bit positions and count are within the valid range for unsigned int.
        printf("Invalid bit range. Valid positions are 0 to %u.\n", width - 1); // Displays an error message if the bit range is invalid. Valid positions are 0 through %u.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    for (unsigned int i = 0; i < count; i++) {     // Runs a loop to toggle the requested number of bits one by one.
        number ^= (1u << (start + i));             // Uses an XOR mask to toggle the bit at position start+i; the bit changes from 0 to 1 or from 1 to 0.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Value after toggling = %u\n", number); // Prints information or a result on the screen: Value after toggling = %u\n
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
