#include<stdio.h> 
int array(int a[6])
{   
    int i;
    printf("Original array\n");
    for(i=0;i<6;i++)
    {   
        printf("%d\t",a[i]);
    } 
    
    for(i=0;i<6;i++)
    {   
         if(i==3)
         {
             continue;
         } 
         else
         {
             a[i]+=a[3]; 
         }
    }   

    printf("\nDesired array\n");
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{   
    int a[6],i,z; 
    printf("Enter the elements of array\n");
    for(i=0;i<6;i++)
    {   
        scanf("%d",&a[i]);
    } 
    array(a);
    return 0; 
}