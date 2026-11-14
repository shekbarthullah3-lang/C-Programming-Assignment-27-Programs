/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 11: Integer to String.
 // Explanation: This program converts an integer number into a string.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
void integerToString(int number, char out[])       // A function that converts an integer into characters and stores them in the out string.
{                                                  // The body of the function starts here.
    char reversed[12];                             // A temporary array for digit characters that are collected in reverse order.
    unsigned int magnitude;                        // A variable that stores the number entered by the user or an array size.
    int count = 0, index = 0;                      // A variable that stores the number entered by the user or an array size.
    int negative = (number < 0);                   // A variable that stores the number entered by the user.

    if (negative)                                  // Checks this condition to decide which branch of the program should run.
        magnitude = (unsigned int)(-(number + 1)) + 1U; // Stores the calculated or selected value in a variable.
    else                                           // Runs this alternative branch when the preceding if condition is false.
        magnitude = (unsigned int)number;          // Stores the calculated or selected value in a variable.
    do {                                           // The body of the do-while loop starts here; it runs at least once before its condition is checked.
        reversed[count++] = (char)('0' + magnitude % 10U); // Converts the last digit into a character and stores it in the reversed array.
        magnitude /= 10U;                          // Divides magnitude by 10 to remove the last digit.
    } while (magnitude > 0U);                      // Ends the current block.
    if (negative) out[index++] = '-';              // Checks this condition to decide which branch to run. If true, the next statement puts a minus sign in the output: out[index++] = '-'.
    while (count > 0)                              // Copies the saved characters to the output in reverse order.
        out[index++] = reversed[--count];          // Copies digits from the temporary array into the output string in reverse order.
    out[index] = '\0';                             // Stores the calculated or selected value in a variable.
}                                                  // Ends the current function, loop, or conditional block.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    int number;                                    // A variable that stores the number entered by the user.
    char text[12];                                 // Creates a character array large enough to store the string entered by the user.
    printf("Enter an integer: ");                  // Displays a prompt asking the user to enter an integer.
    if (scanf("%d", &number) != 1) {               // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid input.\n");                // Displays an error message when the input is invalid.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    integerToString(number, text);                 // Calls integerToString to convert the integer into the text string.
    printf("String value = %s\n", text);           // Displays the calculated result on the screen: String value = %s\n
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
