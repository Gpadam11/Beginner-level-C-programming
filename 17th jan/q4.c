#include<stdio.h>
void forward(int n){
    int a;
    a=n%10;
    if(n==0){
        return;
    }
    forward(n/10);
    printf("%d\t",a);
} 
void reverse(int n){
    int a;
    a=n%10;
    if(n==0){
        return;
    }
    printf("%d\t",a);
    reverse(n/10);
}
int main(){
    int z;
    printf("Enter the number:\n");
    scanf("%d",&z);
    printf("\nEach digit of the entered number in the forward direction is ");
    forward(z);
    printf("\nEach digit of the entered number in the reverse direction is ");
    reverse(z);
    return 0;
}