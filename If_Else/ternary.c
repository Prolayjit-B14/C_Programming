#include <stdio.h>
int main (){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);


    // if (n%2==0){
    //     printf("Even Number");
    // }
    // else{
    //     printf("Odd Number");
    // }

    // ternary operaters
    // exp1 ? exp2 : exp3;

    
    (n%2==0) ? printf("Even Number") : printf("Odd Number");
    return 0;
}