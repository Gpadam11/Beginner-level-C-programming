#include<stdio.h>
void mathsoper(int x,int y,char c)
{
    int z;
    switch (c)
    {
    case '+':
        z=x+y;
        printf("The sum of %d and %d is %d",x,y,z);
        break;

    case '-':
        z=x-y;
        printf("The result of the subtraction of %d from %d is %d",y,x,z);
        break;

    case '*':
        z=x*y;
        printf("The multiplication of %d and %d is %d",x,y,z);
        break;
    
    case '/':
        z=x/y;
        printf("The quotient of the division of %d by %d is %d",x,y,z);
        break;

    case '%':
        z=x%y;
        printf("The remainder of the division of %d by %d is %d",x,y,z);
        break;

    default:
        printf("Wrong choice!");
        break;
    }

}

int main()
{
    int a,b;
    char s;
    printf("Enter two integers:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the character of the operator\n");
    printf("(+ for addition, - for subtractiion, * for multiplication,\n / for division or finding quotient, %% for finding remainder):\n");
    scanf(" %c",&s); 
    mathsoper(a,b,s);

    return 0;
}