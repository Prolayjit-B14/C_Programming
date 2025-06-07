#include <stdio.h>
int main (){
    int x,y;
    printf("Enter coordinates = ");
    scanf("%d %d",&x,&y);
    if (x==0 && y==0){
        printf("Origin");
    }
    else if (x==0){
        printf("Y axis");
    }
    else if(y==0){
        printf("X Axis");
    }
    else{
        printf("Quadrant");
    }
    return 0;
}