#include<stdio.h>
typedef struct
{
    int roll;
    int sem;
    float subs[3];
}
student;

float avg(student *x)
{
    float avg;
    avg=((*x).subs[0]+(*x).subs[1]+(*x).subs[2])/3.0;
    return avg;
}
int main()
{
    student s;
    int i;
    printf("Enter roll number of the student:\n");
    scanf("%d",&s.roll);
    printf("Enter semester number of the student:\n");
    scanf("%d",&s.sem);
    printf("Enter the marks in three subjects:\n");
    for(i=0;i<3;i++)
    {
        scanf("%f",&s.subs[i]);
    }
    float subavg;
    subavg=avg(&s);
    printf("\nStudent info:\n\n");
    printf("Roll Number:\t%d\n",s.roll);
    printf("Semester:\t%d\n",s.sem);
    printf("Average:\t%5.2f",subavg);
    return 0;
}