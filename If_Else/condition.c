#include <stdio.h>
int main (){
    int n;
    printf("Enter a number =");
    scanf("%d",&n);

    if(n > 10){
        printf("greater %d",n);
        }
    else{
        printf("not %d",n);
    }
    return 0;
}