#include <stdio.h>
int main (){
    int a,p;
    int l;
    printf("Enter Length =");
    scanf("%d",&l);

    int b;
    printf("Enter Breadth =");
    scanf("%d",&b);
    
    a = l*b;
    p = 2*(l+b);
    if(a > p){
        printf("Area is Greater than perimeter");
        }
    else{
        printf("Area is smaller than pefrimeter");
    }
    return 0;
}