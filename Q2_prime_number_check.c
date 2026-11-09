/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Question 2: Prime Number Check.
#include <stdio.h>                                     
int main(void)                                          
{                                                       // The body of the function starts here.
    int n, prime = 1;                                   // Stores the input number in n and initially sets the prime flag to 1, meaning it may be prime.
    printf("Enter an integer: ");                       // Displays a prompt asking the user to enter an integer.
    if (scanf("%d", &n) != 1)                           // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
    {    
    printf("Invalid input.\n");                         // Displays an error message when the input is invalid.
        return 1;                                       // Stops the program with an error status because the input was invalid or an error occurred.
    }                                                   // Ends the current function, loop, or conditional block.
    if (n < 2)                                         // Checks whether n is less than 2; numbers below 2 are not prime.
    { 
        prime = 0;                                      // Sets the flag to 0 to mark the number as not prime.
    } 
    else                                              // Starts the alternative else block when the if condition is false; the if block ends before this.
        {
        for (int i = 2; i <= n / i; i++)               // A loop that checks possible divisors from 2 up to the square root of n.
            {
            if (n % i == 0)                            // Checks whether n is divisible by i without a remainder; if so, i is a divisor.
            {
                prime = 0;                              // Sets the flag to 0 to mark the number as not prime.
                break;                                  // Stops the loop immediately and moves to the next statement.
            }                                           // Ends the current function, loop, or conditional block.
        }                                               // Ends the current function, loop, or conditional block.
    }                                                   // Ends the current function, loop, or conditional block.
    if (prime)                                          // Checks whether the prime flag is true so the program can print that the number is prime.
        printf("%d is a prime number.\n", n);           // Displays the calculated result on the screen: %d is a prime number.\n
    else                                                // Runs this alternative branch when the preceding if condition is false.
        printf("%d is not a prime number.\n", n);       // Displays the calculated result on the screen: %d is not a prime number.\n
    return 0;                                           // Tells the operating system that the program completed successfully.
}                                                       // Ends the current function, loop, or conditional block.
