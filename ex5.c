#include <stdio.h>
#include <stdlib.h>

void myfun(int *p1, int *p2, int a);

int main()
{
    int k, i = 10, j = 20;
    k = i + j;
    myfun(&i, &j, k);
    printf("% d % d % d\n", i, j, k);
    printf("\n\n\n\t\t Press Any Key for Quit!!!\n\n\n");
    getchar();
    return 0;
}

void myfun(int *p1, int *p2, int a)
{
    *p1 = *p2 + a;
    *p2 = *p1 + a;
    a = *p1 + *p2;
}