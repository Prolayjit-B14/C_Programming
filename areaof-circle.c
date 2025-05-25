#include <stdio.h>
int main (){
    float r;
    printf("Enter Radius :");
    scanf("%f", &r);

    float pi = 3.1415;
    float Area = pi * r * r;
    printf("Area = %f", Area);
    return 0;
}