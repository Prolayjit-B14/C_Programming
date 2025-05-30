#include <stdio.h>
int main (){
    float x;
    printf("Enter a Decimel Number : ");
    scanf("%f", &x);

    int y = x;
    printf("The Integer part : %d\n",y);

    float z = x - y;
    printf("The Fractioal Part : %f",z);
    return 0;
}