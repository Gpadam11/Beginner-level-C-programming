#include<stdio.h>
int main()
{
   int n,revno;
   printf("\nEnter any number:");
   scanf("%d",&n);
   revno=reverse(n);
   printf("\nAfter reverse the no is \n:%d",revno);
   return 0;
}
int sum=0,rem;
reverse(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse(num/10);
   }
   else
      return sum;
   return sum;
}