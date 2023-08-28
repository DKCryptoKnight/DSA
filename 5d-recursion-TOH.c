/*

Here's how the program works:

1. The user is prompted to enter the number of disks.
2. The `towerOfHanoi()` function is called with the number of disks and the names of the three rods as arguments.
3. The `towerOfHanoi()` function uses recursion to solve the Tower of Hanoi problem.
4. If `n` is equal to 1, the function prints a message to move the top disk from the `from_rod` to the `to_rod`.
5. If `n` is greater than 1, the function recursively calls itself with `n-1` disks, moving the disks from `from_rod` to `aux_rod`.
6. The function then prints a message to move the `n`th disk from `from_rod` to `to_rod`.
7. Finally, the function recursively calls itself with `n-1` disks, moving the disks from `aux_rod` to `to_rod`.

This program uses the recursive approach to solve the Tower of Hanoi problem. The function `towerOfHanoi()` 
takes four arguments: the number of disks, the name of the rod from which the disks need to be moved,
the name of the rod to which the disks need to be moved, and the name of the auxiliary rod. 
The function uses recursion to solve the problem by moving the top `n-1` disks from the `from_rod` to the `aux_rod`, 
then moving the `n`th disk from the `from_rod` to the `to_rod`, and finally moving the `n-1` disks from the `aux_rod` to the `to_rod`.
The function terminates when there is only one disk left to be moved.

This program works by using the following recursive definition of the Tower of Hanoi problem:

towerOfHanoi(n, from_rod, aux_rod, to_rod) =
    if n = 1
        then move disk 1 from from_rod to to_rod
    else
        move n - 1 disks from from_rod to aux_rod
        move disk n from from_rod to to_rod
        move n - 1 disks from aux_rod to to_rod
  */

#include <stdio.h>

void towerOfHanoi(int n, char from_rod, char aux_rod, char to_rod) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from_rod, to_rod);
    } else {
        towerOfHanoi(n - 1, from_rod, to_rod, aux_rod);
        printf("Move disk %d from %c to %c\n", n, from_rod, to_rod);
        towerOfHanoi(n - 1, aux_rod, from_rod, to_rod);
    }
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
