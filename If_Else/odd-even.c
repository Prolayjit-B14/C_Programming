#include <stdio.h>
int main (){
    int x;
    printf("Enter a Number :");
    scanf("%d", &x);
    if(x%2 == 0){
        printf("Even number");
        }
    if(x%2 !=0){
        printf("Odd");
    }
    return 0;
}