#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c);
int min(int a, int b, int c);

int main()
{
    int a1, a2, a3, mik, meg;
    printf("Give a1: ");
    scanf("%d", &a1);
    printf("Give a2: ");
    scanf("%d", &a2);
    printf("Give a3: ");
    scanf("%d", &a3);
    meg = max(a1, a2, a3);
    mik = min(a1, a2, a3);
    printf("Max= %d \n", meg);
    printf("Min= %d \n", mik);
    printf("\n\n\n\t\t Press Any Key for Quit!!!\n\n\n");
    getchar();
    return 0;
}

int max(int a, int b, int c)
{
    int meg;
    meg = a;
    if (b > meg)
        meg = b;
    if (c > meg)
        meg = c;
    return (meg);
}

int min(int a, int b, int c)
{
    int mik;
    mik = a;
    if (b < mik)
        mik = b;
    if (c < mik)
        mik = c;
    return (mik);
}
