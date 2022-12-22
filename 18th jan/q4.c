#include<stdio.h> 
#include<string.h>
struct student 
{
    int roll; 
    int sem; 
    double cgpa;
};
int main()
{ 
    struct student s1; 
    struct student *ptr; 
    ptr=&s1; 
    (*ptr).roll=101; 
    (*ptr).sem=2;
    (*ptr).cgpa=6.7;
    printf("%d\n",s1.roll); 
    printf("%d\n",s1.sem); 
    printf("%lf\n",s1.cgpa);    
    return 0; 
}