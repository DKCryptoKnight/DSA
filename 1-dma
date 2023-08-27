/* Algorithm for a C program with the implementation of DMA:
Declare variables n, i, *ptr, and sum.
Prompt the user to enter the number of elements and read it into n.
Allocate memory for an array of n integers using malloc().
Check if the memory allocation was successful using if(ptr == NULL).
If the memory allocation was unsuccessful, print an error message and exit the program using exit(0).
Prompt the user to enter the elements of the array using a for loop and read them in using scanf().
Calculate the sum of the elements of the array using a for loop and the sum variable.
Print the sum of the elements of the array using printf().
Free the dynamically allocated memory using free().
End the program.  */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    if(ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}
