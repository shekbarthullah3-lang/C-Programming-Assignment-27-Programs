/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 18: Extract n Bits from a Position.
 // Explanation: This program extracts bits from a specified position in an integer and calculates their value.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#include <limits.h>                                // This header provides integer range information such as CHAR_BIT and LLONG_MAX.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    unsigned int number, start, count;             // number is the integer whose bits are being changed; start is the starting bit position; count is the number of bits to change.
    unsigned int width = (unsigned int)(sizeof(number) * CHAR_BIT); // Calculates the total number of bits in an unsigned int.
    printf("Enter number, starting position, and bit count: "); // Displays a prompt asking the user for the number, starting position, and bit count.
    if (scanf("%u %u %u", &number, &start, &count) != 3) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid input.\n");                // Displays an error message when the input is invalid.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    if (start >= width || count == 0 || count > width - start) { // Checks whether the bit positions and count are within the valid range for unsigned int.
        printf("Invalid bit range.\n");            // Displays an error message if the bit range is invalid.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    unsigned int mask;                             // A variable used to create a mask that selects the required number of bits.
    if (count == width)                            // Checks this condition to decide which branch of the program should run.
        mask = ~0u;                                // Sets all bits of an unsigned int to 1.
    else                                           // Runs this alternative branch when the preceding if condition is false.
        mask = (1u << count) - 1u;                 // Creates a mask containing count number of 1-bits.
    unsigned int extracted = (number >> start) & mask; // Shifts number to the right and applies the mask to select only the required bits.
    printf("Extracted value = %u\n", extracted);   // Displays the calculated result on the screen: Extracted value = %u\n
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
