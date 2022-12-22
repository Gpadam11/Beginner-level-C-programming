#include<stdio.h> 
int avg(int a, int b, int c)
{
double av;
av=((a+b+c)/3.0);
return av;
}
int main()
{
    int x=6, y=6,z=9; double ag;
    ag=avg(x,y,z);
    printf("average=%lf",ag);

}