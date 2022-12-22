#include<stdio.h> 
void ptt(int no, char ch)
{
    printf("Pattern:\n");
    int i,j;
    for(i=no;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
    int main()
    {
        int no; 
        char ch1;
        printf("Enter the number\n");
        scanf("%d",&no);
        printf("Enter the character\n");
        scanf(" %c",&ch1);
        ptt(no,ch1);  
        return 0;  
    }
    