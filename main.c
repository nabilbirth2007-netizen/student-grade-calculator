#include <stdio.h>

int main(void)
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("STUDENT GRADE CALCULATOR\n");

    printf("Enter marks for Subject 1: ");
    scanf("%d", &m1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &m2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &m3);

    printf("Enter marks for Subject 4: ");
    scanf("%d", &m4);

    printf("Enter marks for Subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0f;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage >= 90)
        printf("\nGrade = A+");
    else if (percentage >= 80)
        printf("\nGrade = A");
    else if (percentage >= 70)
        printf("\nGrade = B");
    else if (percentage >= 60)
        printf("\nGrade = C");
    else if (percentage >= 50)
        printf("\nGrade = D");
    else
        printf("\nGrade = F");

    return 0;
}