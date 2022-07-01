// C program to add two numbers without using addition operator
#include <stdio.h>

int main() {
    
    int num1,num2,zero=1,sum;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    sum=num1;
    while(zero<=num2){
        sum=sum+1;
        zero++;
    }
    printf("sum of %d and %d = %d",num1,num2,sum);
    
    
    return 0;
}
