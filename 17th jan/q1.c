#include<stdio.h> 
int main()
{
    int n=10;
    printf("\nNumbers from 1 To 10 are: ");
     print(n);
    return 0;
}
void print(int n)
{
    if(n)
        print(n-1);
    else
        return;
    printf("\n%d\n", n);
}