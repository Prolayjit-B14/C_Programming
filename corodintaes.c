#include <stdio.h>
int main (){
    int x,y;
    printf("Enter coordinates = ");
    scanf("%d %d",x,y);
    if(x == 0 && y == 0){
        printf("Origin");
    }
    else if(x == 0){
        printf("Lies on Y-axis");
    }
    else if(y == 0){
        printf(" Lies on  X-axis");
    }
    else if(x > 0 && y > 0){
        printf("1st Quadrant");
    }
    else if(x < 0 && y > 0){
        printf("2nd Quadrant");
    }
    else if(x < 0 && y < 0){
        printf("3rd Quadrant");
    }
    else if(x > 0 && y < 0){
        printf("4th Quadrant");
    }
    else{
        printf("Invalid");
    }

    return 0;
}