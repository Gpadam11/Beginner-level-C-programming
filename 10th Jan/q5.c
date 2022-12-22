#include<stdio.h>

void dispfunc(int m,int n,char c)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%c ",c);
        }

        printf("\n");
    }
}
int main()
{
    dispfunc(3,2,'-');
    printf("AB\n");
    dispfunc(6,3,'=');
    printf("DF\n");
    dispfunc(2,5,'*');
    return 0;
}