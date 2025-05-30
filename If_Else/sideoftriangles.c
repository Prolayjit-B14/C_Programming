#include <stdio.h>
int main (){
    int a,b,c;
    printf("Enter 3 number =");
    scanf("%d%d%d",&a ,&b ,&c);

    if( a+c>b && a+b>c && b+c>a){
        printf("valid");
        }
    else{
        printf("not");
    }
    return 0;
}