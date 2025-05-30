#include <stdio.h>
int main (){
    int a,b,c;
    printf("Enter 3 number =");
    scanf("%d%d%d",&a ,&b ,&c);

    if( a>b && a>c){
        printf("%d greastest",a);
        }
    else if (b>a && b >c){
        printf("%d graest",b);
    }
    else{
        printf("%d is greates",c);
    }
    return 0;
}