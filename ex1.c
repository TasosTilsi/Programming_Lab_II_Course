#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
#define N 3

struct students
{
    char name[SIZE];
    int aem;
    float labGrade, theoryGrade;
};

int main()
{
    struct students list[N];

    for (int i = 0; i < N; i++)
    {
        printf("Add a student's name:");
        scanf("%s", list[i].name);
        printf("\nAdd a student's AEM:");
        scanf("%d", &list[i].aem);
        printf("\nAdd a student's lab grade:");
        scanf("%f", &list[i].labGrade);
        printf("\nAdd a student's theory grade:");
        scanf("%f", &list[i].theoryGrade);
        printf("\n");
        //printf("name: %s \tlab: %f \ttheory: %f\n\n",list[i].name,list[i].labGrade,list[i].theoryGrade);
	}

    for (int i = 0; i < N; i++)
    {
		
        printf("AEM: %s \tfinal grade: %f\n\n",list[i].aem,(list[i].labGrade*0.4+list[i].theoryGrade*0.6));

    }

    printf("\n\n\n\t\t Press Any Key for Quit!!!\n\n\n");
    getchar();
    return 0;
}
