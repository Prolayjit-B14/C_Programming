#include <stdio.h>
int main (){
    int n;
    printf("Enter a number =");
    scanf("%d",&n);

    if(n > 9 && n<100){
        printf("2 digit");
        }
    else{
        printf("not");
    }
    return 0;
}