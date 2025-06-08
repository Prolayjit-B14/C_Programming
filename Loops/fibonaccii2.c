
//print first n terms of Fibonacci series using loop

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 1;

    
    printf("Fibonacci Series: ");
    if (n >= 1) printf("\nFibonacci Series of 1st  term is : 1 ");
    if (n >= 2) printf("\nFibonacci Series of 2nd  term is : 1");

    for(int i = 3; i <= n ; i++){
        sum = a + b;
        a = b;
        b = sum;
        printf("\nFibonacci Series of %dth  term is : %d",i,sum);
    }

    return 0;
}