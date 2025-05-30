#include <stdio.h>
int main (){
    int x;
    printf("Enter a Number :");
    scanf("%d", &x);
    if(x%2 == 0){
        printf("Even number");
        }
    else{
        printf("odd");
    }
    return 0;
}