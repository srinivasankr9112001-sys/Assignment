/*
1. WAP & Requirement:

Write a C function that takes an integer array and its size.
It returns the second largest element.
Do not sort the array.
The array has at least 2 distinct values (duplicates of the max don't count as the second largest).

2. Design

List of Variables used = array,a,Largest,Second,i.
Variable Type's = arr[],int- a,Largest,Second,i.
Variable Used Purpose = arr[]-i/p data,a-element size,Largest-Biggest Value, Second-2nd Largest distinct value,i-loop.

3. Algorithm :

    1) Start.
    2) Set largest = second = INT_MIN.
    3) For each element x:
    4) If x > largest: second = largest, then largest = x.
    5) Else if x < largest and x > second: second = x.
    6) Otherwise (equal to largest or too small): ignore it.
    7) Return second.
    8) End.

4. Code



5. Expected Output:
    Enter size: 4, Enter 4 integers: 5 6 8 9, Second largest = 8




4. Code:

*/

#include <stdio.h>  // Standard I/O library: printf(), scanf()

// Function-second largest element of array
int secondLargest(int arr[], int a) {
    int largest = INT_MIN, second = INT_MIN;   // Start both at the smallest possible integer in given data

    for (int i = 0; i < a; i++) {              // Read every element.
        if (arr[i] > largest) {                // Step 1: First element is a maximum
            second = largest;                  // old maximum element goes to the second largest
            largest = arr[i];                  // Update the maximum to the current element
        } else if (arr[i] < largest && arr[i] > second) {  // Step 2: Element smaller than maximum Element, Update the second largest
            second = arr[i];
        }                                      // Step 3: element equals the maximum or is too small, so ignore it
    }
    return second;                             // Return the second largest value if found
}

int main() {                                   // Program Starting point
    int a;                                     // Stores the array size entered by the user
    printf("Enter size: ");                    // Print the user for the array size
    scanf("%d", &a);                           // Read the size from the keyboard

    int arr[a];                                // Declare a variable-length array of (a) integers

    printf("Enter %d integers: ", a);          // Print the user enterd elements
    for (int i = 0; i < a; i++)                // Loop from index 0 to (a)-1
        scanf("%d", &arr[i]);                  // Read each element into the array

    printf("Second largest = %d\a", secondLargest(arr, n));  // Read the function and print the result
    return 0;                                  // Return 0, Program execution.
}
