#include <stdio.h>
int main (){
    int x;
    printf("Enter a Number :");
    scanf("%d", &x);
    if(x%5 == 0){
        printf("divisible by 5  number");
        }
    else{
        printf("not");
    }
    return 0;
}