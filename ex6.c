#include <stdio.h>
#include <stdlib.h>

void myfun(int n, int *p1, float *p2);

int main()
{
    int s1, n;
    float s2;
    printf("Give n: ");
    scanf("%d", &n);
    myfun(n, &s1, &s2);
    printf("\n 1-2+3-...+%d = %d\n", n, s1);
    printf("\n 1+1/2+1/3+...+1/%d = %f\n\n", n, s2);
    printf("\n\n\n\t\t Press Any Key for Quit!!!\n\n\n");
    getchar();
    return 0;
}

void myfun(int n, int *p1, float *p2)
{
    int i, j = 1;
    *p1 = 0;
    *p2 = 0;
    for (i = 1; i <= n; i = i + 1)
    {
        *p1 = *p1 + j * i;
        *p2 = *p2 + (1.0 / i);
        j = -j;
    }
}