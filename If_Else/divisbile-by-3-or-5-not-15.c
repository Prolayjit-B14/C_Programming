#include <stdio.h>
int main (){
    int n;
    printf("Enter a number =");
    scanf("%d",&n);

    if( n%3==0 || n%5==0){
        if(n%15==0){
            printf("divisible by 3 or 5 but not by 15 ");
        }
        else{
        printf("divisible ");
        }
    }
    else{
        printf("not");
    }
    return 0;
}