/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 16: Uppercase to Lowercase.
 // Explanation: This program converts uppercase letters in a string to lowercase.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#include <string.h>                                // This header is required for string functions such as strlen and strcspn.
#include <ctype.h>                                 // This header is required for character functions such as isdigit and tolower.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    char text[300];                                // Creates a character array large enough to store the string entered by the user.
    printf("Enter a string: ");                    // Displays a prompt asking the user to enter a string.
    if (fgets(text, sizeof(text), stdin) == NULL) { // Checks this condition to decide which branch of the program should run.
        printf("Input error.\n");                  // Displays an input error message.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    for (size_t i = 0; text[i] != '\0'; i++) {     // Runs the loop according to its initial value, condition, and increment expression.
        text[i] = (char)tolower((unsigned char)text[i]); // Converts each character to lowercase and stores it in the same string.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Lowercase string = %s", text);         // Prints information or a result on the screen: Lowercase string = %s
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
