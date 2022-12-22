#include<stdio.h> 

int f1(int returns)
{  
 returns +=6.99;
 return(returns);
}
int main()
{
    int num=f1(sizeof(float));
    printf("%d", ++num);
    return 0;
}

