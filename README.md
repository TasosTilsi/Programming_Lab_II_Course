# Programming_Lab_II_Course

### Description


This repo contains excersices from my second year Programming Lab Courses at TEI of Central Macedonia

### Exercises


##### Ex1


Develop a program that will use a "students" structure with "name", "AEM", "laboratory grade" and "theory grade" fields. Register 3 entries and display the AEM and the final grade of each student.

(The final grade is calculated from 40% of the grade of the laboratory and 60% of the theory grade).


##### Ex2


Develop a program that accepts three integers. It will use a function that will find the largest of the three numbers and a function that will find the smallest of the three numbers and will display the largest and smallest number.


##### Ex3


Develop a program that will accept two integer numbers. Use a function that will find the sum and their difference will return them to the master program and will be printed.


##### Ex4


To develop a program it will print the requested terms (n) of the Fibonacci sequence. Each term of the sequence will calculate it with a recursive function.

Fn = Fn -1 + Fn - 2 with F0 = 0 and F1 = 1


##### Ex5

```c

#include <stdio.h>
#include <stdlib.h>

void myfun(int *p1, int *p2, int a);

int main()
{
    int k, i = 10, j = 20;
    int *p1;
    int *p2;
    p1 = &i;
    p2 = &j;
    k = i + j;
    myfun(p1, p2, k);
    printf("% d % d % d\n", i, j, k);
    system("PAUSE");
    return 0;
}

void myfun(int *p1, int *p2, int a)
{
    *p1 = *p2 + a;
    *p2 = *p1 + a;
    a = *p1 + *p2;
}

```


Modify the main and how to call the function so that the p1 and p2 pointers are not needed in the main.


##### Ex6


Develop a program that accepts a number (n) from a user, it will use a function that will accept this number and return to the main program through indexes the sums [ 1-2 + 3-4 + ... + ν ] and [ 1+ ( 1/2) + (1/3) + ... + (1 / n) ]. The sums will be printed in the main.


##### Ex7


Develop a program that will accept 20 real numbers from a text file, store them in a table, and a function will calculate and return the sum of the table elements. The sum will be printed in the main program.