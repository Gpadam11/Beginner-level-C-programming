#include<stdio.h> 
double series(int n)
{
double s1=0.0;
int i,j;
for(i=1;i<=n;i++)
{ 
    int s=1;
    for(j=1;j<=i;j++)
    {
    s=s*j;}
    if(i%2==0)
    {
        s1=s1+s/1.0;
    }
    else
    {
        s1=s1+1.0/s;
    }
    
return s1;
}
}
int main()
{
    int no,n;
    double ag;
    printf("Enter the range");
    scanf("%d",n);
    ag=series(n);
    printf("average=%lf",ag);

}
