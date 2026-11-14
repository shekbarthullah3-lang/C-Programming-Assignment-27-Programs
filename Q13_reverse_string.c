/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 13: Reverse a String.
 // Explanation: This program reverses the order of the characters in a string.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#include <string.h>                                // This header is required for string functions such as strlen and strcspn.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    char text[200];                                // Creates a character array large enough to store the string entered by the user.
    printf("Enter a string: ");                    // Displays a prompt asking the user to enter a string.
    if (fgets(text, sizeof(text), stdin) == NULL) { // Checks this condition to decide which branch of the program should run.
        printf("Input error.\n");                  // Displays an input error message.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    text[strcspn(text, "\n")] = '\0';              // If fgets captured a newline, replaces it with the null character to clean up the string.
    size_t left = 0;                               // Declares the required local variables and assigns their initial values.
    size_t length = strlen(text);                  // A variable that stores the number entered by the user or an array size.
    size_t right = (length == 0) ? 0 : length - 1; // A variable that stores the number entered by the user or an array size.
    while (left < right) {                         // Repeats the loop until the left and right positions meet in the middle.
        char temp = text[left];                    // An array that stores the string or sentence entered by the user.
        text[left] = text[right];                  // Stores the calculated or selected value in a variable.
        text[right] = temp;                        // Stores the calculated or selected value in a variable.
        left++;                                    // Moves the left index to the next position.
        right--;                                   // Moves the right index to the previous position.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Reversed string = %s\n", text);        // Prints information or a result on the screen: Reversed string = %s\n
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
