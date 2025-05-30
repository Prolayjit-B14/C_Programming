#include <stdio.h>
int main (){
    int x;
    printf("Enter a year :");
    scanf("%d", &x);
    if(x%4 == 0){
        printf("Leapyear");
        }
    else{
        printf("not");
    }
    return 0;
}