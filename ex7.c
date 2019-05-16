#include <stdio.h>
#include <stdlib.h>

float myfun(float p[20]);

int main()
{
    FILE *pF1;
    int i;
    float p[20], sum;
    pF1 = fopen("myfile.txt", "r");
    for (i = 0; i < 20; i = i + 1)
    {
        fscanf(pF1, "%f", &p[i]);
    }
    sum = myfun(p);
    printf("Sum = %.2f\n", sum);
    fclose(pF1);
    printf("\n\n\n\t\t Press Any Key for Quit!!!\n\n\n");
    getchar();
    return 0;
}

float myfun(float p[20])
{
    int i;
    float s = 0;
    for (i = 0; i < 20; i = i + 1)
    {
        s = s + p[i];
    }
    return (s);
}