#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 100;
    for(int i = 1 ; i <= 34 ; i ++){
        printf("%d ",a);
        a = a - 3;
    }
    return 0;
}