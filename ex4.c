#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main()
{
    int n;
    int f;
    printf("Enter an positive integer : ");
    scanf("%d", &n);
    f = fib(n);
    printf("F(%d) = %d\n", n, f);
    printf("\n\n\n\t\t Press Any Key for Quit!!!\n\n\n");
    getchar();
    return 0;
}

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}