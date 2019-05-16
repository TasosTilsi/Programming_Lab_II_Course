#include <stdio.h>
#include <stdlib.h>

void func(int A[4]);

int main()
{
    int A[4];
    printf("Give a number : ");
    scanf("%d", &A[0]);
    printf("Give a number : ");
    scanf("%d", &A[1]);
    func(A);
    printf("Sum= %d \n", A[2]);
    printf("Diff= %d \n", A[3]);
    printf("\n\n\n\t\t Press Any Key for Quit!!!\n\n\n");
    getchar();
    return 0;
}

void func(int A[4])
{
    A[2] = A[0] + A[1];
    A[3] = A[0] - A[1];
}