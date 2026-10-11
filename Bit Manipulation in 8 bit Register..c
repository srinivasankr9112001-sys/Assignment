/*
1. WAP & Requirement:

Given an unsigned char register, write a function that:
Sets bit 2 (3rd bit)
Clears bit 5 (6th bit)
Toggles bit 0 (1st bit) and returns the modified value.

2. Design


List of Variables used = num, n,result.
Variable Type's = unsigned character's
Variable Used Purpose = reg-i/p,n-read i/p element's,result-modified i/p element's

3. Algorithm :

    1) Start.
    2) Operation:(8 bit system)
       Set bit (OR) - index 2 -  Formula - (num |(1<<2))
       Clear bit (AND with Not) - index 5 -  Formula - (num &=^(1<<5))
       Toggle bit (XOR) - index 0 -  Formula - (num ^=(1<<0)).
    3) End.

4. Code



5. a) Expected Output:
    8 bit Register.
    Enter i/p = 0, binary = 0000 0000.

    Set bit = 0000 0100
    Clear bit = 0000 0100
    Toggle bit (0) = 0000 0101

    0/p = 5, Binary = 0000 0101

    b) Actual o/p: as per user requirement.



4. Code:

*/

#include <stdio.h>                         // Standard I/O: printf(), scanf()

                                           // Function: modifies the register and returns the new value
unsigned char modifyRegister(unsigned char num) {
    num |= (1 << 2);                       // set bit 2: OR
    num &= ~(1 << 5);                      // clear bit 5: AND wit NOT
    num ^= (1 << 0);                       // toggle bit 0: XOR
    return num;                            // Return the modified register
}

                                           // prints an 8-bit value in binary (MSB first)
int printBinary(unsigned char value) {
    for (int i = 7; i >= 0; i--)           // Loop from bit 7 down to bit 0 (8 bit Register)
        printf("%d", (value >> i) & 1);    // Shift bit i to position 0, mask it, print it
}

int main() {                                // Program starting point
    unsigned int input;                     // Read as integer element
    printf("Enter register value : ");      // Read the user i/p element
    scanf("%u", &input);                    // Read the value from the keyboard

    unsigned char num = (unsigned char)input;  // Convert to 8-bit register
    unsigned char result = modifyRegister(num); // Apply set, clear, toggle operations

    printf("Before: %3u  = ", num);        // Print value in decimal
    printBinary(num);                      // Print value in binary
    printf("\nAfter : %3u  = ", result);   // Print modified value in decimal
    printBinary(result);                   // Print modified value in binary
    printf("\n");
    return 0;                              // Execution.
}
