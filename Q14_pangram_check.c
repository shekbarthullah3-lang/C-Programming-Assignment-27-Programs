/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 14: Pangram Check.
 // Explanation: This program checks whether a sentence contains every English letter from A to Z.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#include <string.h>                                // This header is required for string functions such as strlen and strcspn.
#include <ctype.h>                                 // This header is required for character functions such as isdigit and tolower.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    char text[500];                                // Creates a character array large enough to store the string entered by the user.
    int seen[26] = {0};                            // Creates an array of flags to record whether each of the 26 letters from A to Z has appeared.
    printf("Enter a sentence: ");                  // Displays a prompt asking the user to enter a sentence.
    if (fgets(text, sizeof(text), stdin) == NULL) { // Checks this condition to decide which branch of the program should run.
        printf("Input error.\n");                  // Displays an input error message.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    for (size_t i = 0; text[i] != '\0'; i++) {     // Runs the loop according to its initial value, condition, and increment expression.
        unsigned char ch = (unsigned char)tolower((unsigned char)text[i]); // A variable that stores the number entered by the user or an array size.
        if (ch >= 'a' && ch <= 'z')                // Checks whether the current character is a lowercase English letter from a to z.
            seen[ch - 'a'] = 1;                    // Finds the index for the letter from a to z and marks it as seen by setting its flag to 1.
    }                                              // Ends the current function, loop, or conditional block.
    int pangram = 1;                               // A variable that stores the number entered by the user or an array size.
    for (int i = 0; i < 26; i++) {                 // Runs a loop to check all 26 letters of the alphabet.
        if (!seen[i]) {                            // Checks whether this alphabet letter is missing from the sentence.
            pangram = 0;                           // Sets a flag to indicate that the sentence is not a pangram because a letter is missing.
            break;                                 // Stops the loop immediately and moves to the next statement.
        }                                          // Ends the current function, loop, or conditional block.
    }                                              // Ends the current function, loop, or conditional block.
    if (pangram)                                   // Checks this condition to decide which branch of the program should run.
        printf("The sentence is a pangram.\n");    // Displays the calculated result on the screen: The sentence is a pangram.\n
    else                                           // Runs this alternative branch when the preceding if condition is false.
        printf("The sentence is not a pangram.\n"); // Displays the calculated result on the screen: The sentence is not a pangram.\n
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
