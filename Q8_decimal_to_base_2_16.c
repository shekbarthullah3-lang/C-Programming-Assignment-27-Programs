/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Question 08: Decimal to Base 2 through 16.
#include <stdio.h>                                                  // This header is required to use input/output functions such as printf and scanf.
void convertToBase(long long number, int base, char result[])       // A function that converts a decimal number to the requested base and writes the result into a string.
{                                                                   // The body of the function starts here.
    const char digits[] = "0123456789ABCDEF";                       // Stores the symbols 0-9 and A-F used to represent digits in bases up to 16.
    char temp[65];                                                  // Creates a temporary character array to store digits or remainders.
    int count = 0, out = 0;                                         // A variable that stores the number entered by the user or an array size.
    if (number == 0)                                               // Checks whether the number is zero; in that case, the conversion result should be written directly as 0.
    {    
        result[0] = '0';                                            // Places 0 as the first character of the output string.
        result[1] = '\0';                                           // Places the null character at the next position to mark the end of the one-character string.
        return;                                                     // Stops this void function and returns to the calling code.
    }                                                               // Ends the current function, loop, or conditional block.
    while (number > 0)                                             // Repeats the loop while the number is positive, extracting digits by dividing by the base.
    {    
        temp[count++] = digits[number % base];                      // Stores the character for the remainder of number divided by base in temp, then increases count.
        number /= base;                                             // Uses integer division by the base to move to the next digit.
    }                                                               // Ends the current function, loop, or conditional block.
    while (count > 0)                                              // Copies the saved characters to the output in reverse order.
    {    
        result[out++] = temp[--count];                              // Copies the digits stored in temp into result in reverse order.
    }                                                               // Ends the current function, loop, or conditional block.
    result[out] = '\0';                                             // Adds the null character to mark the end of the result string.
}                                                                   // Ends the current function, loop, or conditional block.
int main(void)                                                      // The main function where program execution begins.
{                                                                   // The body of the function starts here.
    long long decimal;                                              // A variable representing the first value or an array.
    int base;                                                       // A variable representing the first value or an array.
    char result[65];                                                // A variable that stores the calculated result or converted string.
    printf("Enter a non-negative decimal number: ");                // Displays a prompt asking the user for a non-negative decimal number.
    if (scanf("%lld", &decimal) != 1 || decimal < 0)               // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
    {   
        printf("Invalid decimal number.\n");                        // Displays an error message if the decimal number is invalid.
        return 1;                                                   // Stops the program with an error status because the input was invalid or an error occurred.
    }                                                               // Ends the current function, loop, or conditional block.
    printf("Enter target base (2 to 16): ");                        // Displays a prompt asking the user to enter a target base from 2 to 16.
    if (scanf("%d", &base) != 1 || base < 2 || base > 16)          // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
    {    
        printf("Base must be from 2 to 16.\n");                     // Displays an error message if the selected base is outside 2 through 16.
        return 1;                                                   // Stops the program with an error status because the input was invalid or an error occurred.
    }                                                               // Ends the current function, loop, or conditional block.
    convertToBase(decimal, base, result);                           // Calls the function to convert the decimal number to the selected base and store the result string.
    printf("Converted value = %s\n", result);                       // Displays the calculated result on the screen: Converted value = %s\n
    return 0;                                                       // Tells the operating system that the program completed successfully.
}                                                                   // Ends the current function, loop, or conditional block.
