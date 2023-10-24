#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int sid;
    float score;
} Student;

int main()
{
    const int num_students = 50;
    Student students[num_students];

    for (int i = 0; i < num_students; i++)
    {
        students[i].sid = i + 1;
        students[i].score = rand() % 101;
    }

    printf("Ñ§ºÅ\t³É¼¨\n");
    printf("-----------------\n");

    for (int i = 0; i < num_students; i++)
    {
        if (students[i].score >= 80)
        {
            printf("%d\t%.2f\n", students[i].sid, students[i].score);
        }
    }
    return 0;
}

