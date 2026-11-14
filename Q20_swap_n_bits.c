/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 20: Swap n Bits Between Two Numbers.
 // Explanation: This program swaps the same bit range between two numbers.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#include <limits.h>                                // This header provides integer range information such as CHAR_BIT and LLONG_MAX.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    unsigned int a, b, start, count;               // a and b are the numbers whose bits will be swapped; start and count identify the bit range.
    unsigned int width = (unsigned int)(sizeof(a) * CHAR_BIT); // Calculates the total number of bits in an unsigned int.
    printf("Enter A, B, start position, and bit count: "); // Displays a prompt asking the user for A, B, the starting position, and the bit count.
    if (scanf("%u %u %u %u", &a, &b, &start, &count) != 4) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid input.\n");                // Displays an error message when the input is invalid.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    if (start >= width || count == 0 || count > width - start) { // Checks whether the bit positions and count are within the valid range for unsigned int.
        printf("Invalid bit range.\n");            // Displays an error message if the bit range is invalid.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    unsigned int fieldMask = (count == width) ? ~0u : ((1u << count) - 1u); // Creates a mask for count bits; if count equals the full width, all bits are set to 1.
    unsigned int shiftedMask = fieldMask << start; // Shifts the bit mask to the left by the starting position.
    unsigned int fieldA = (a >> start) & fieldMask; // A variable representing the first value or an array.
    unsigned int fieldB = (b >> start) & fieldMask; // A variable representing the first value or an array.
    a = (a & ~shiftedMask) | (fieldB << start);    // Replaces the selected bit field in a with fieldB from b.
    b = (b & ~shiftedMask) | (fieldA << start);    // Replaces the selected bit field in b with fieldA from a.
    printf("A after swap = %u\n", a);              // Prints information or a result on the screen: A after swap = %u\n
    printf("B after swap = %u\n", b);              // Prints information or a result on the screen: B after swap = %u\n
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
