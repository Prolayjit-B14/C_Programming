#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Base : ");
    scanf("%d",&a);
    printf("Enter Exponent : ");
    scanf("%d",&b);
    int power = 1;

    for(int i = 1; i <= b ; i++){
        power = power * a;
        printf("\n %d raised to the power %d is : %d",a,i,power);
    }
    return 0;
}