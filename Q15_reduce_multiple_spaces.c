/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 15: Reduce Multiple Spaces.
 // Explanation: This program reduces consecutive spaces to a single space.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#include <string.h>                                // This header is required for string functions such as strlen and strcspn.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    char text[500];                                // Creates a character array large enough to store the string entered by the user.
    printf("Enter a sentence: ");                  // Displays a prompt asking the user to enter a sentence.
    if (fgets(text, sizeof(text), stdin) == NULL) { // Checks this condition to decide which branch of the program should run.
        printf("Input error.\n");                  // Displays an input error message.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    text[strcspn(text, "\n")] = '\0';              // If fgets captured a newline, replaces it with the null character to clean up the string.
    size_t read = 0, write = 0;                    // A variable representing the first value or an array.
    while (text[read] != '\0') {                   // The block repeats while this condition is true.

        if (text[read] == ' ' && write > 0 && text[write - 1] == ' ') { // Checks whether the current character is a space and the previous output character is also a space.
            read++;                                // Increases the count or index by 1.
            continue;                              // Skips the remaining statements in this loop iteration and continues with the next iteration.
        }                                          // Ends the current function, loop, or conditional block.
        text[write++] = text[read++];              // Copies the current character to the output position and advances the read/write indexes.
    }                                              // Ends the current function, loop, or conditional block.
    text[write] = '\0';                            // Places the null character at the end of the cleaned string.
    printf("Cleaned string = %s\n", text);         // Prints information or a result on the screen: Cleaned string = %s\n
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
